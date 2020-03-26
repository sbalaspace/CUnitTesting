#include <check.h>
#include "calc.h"
#include <stdlib.h>

// Test function example
// START_TEST macro is a function that takes an argument, which is the name of our test function
// Several assert functions are defined in Reference - http://check.sourceforge.net/doc/doxygen/html/check_8h.html
// END_TEST indicates the finish of test function definintion

// Test case to check input1
START_TEST(test_calc_input1) {
  Calc* calc;
  extern Calc* create_input(double, double);

  calc = create_input(1.0, 2.0);

  ck_assert(calc_input1(calc) > 0 && calc_input1(calc) < 2);

  free_calc(calc);
} END_TEST
// Test case to check input2
START_TEST(test_calc_input2) {
  Calc* calc;
  extern Calc* create_input(double, double);

  calc = create_input(1.0, 2.0);

  ck_assert(calc_input2(calc) > 1.99 && calc_input2(calc) < 2.01);

  free_calc(calc);
} END_TEST
// Test case to check addition
START_TEST(test_calc_add) {
  Calc* calc;
  extern Calc* create_input(double, double);

  calc = create_input(1.0, 2.0);

  ck_assert(add(calc) > 2.9999 && calc_input2(calc) < 3.0001);

  free_calc(calc);
} END_TEST
// Test case to check failed cases
START_TEST(test_calc_add_fail) {
  Calc* calc;
  extern Calc* create_input(double, double);

  calc = create_input(1.0, 2.0);

  ck_assert(add(calc) > 3.9999 && calc_input2(calc) < 2.0001);

  free_calc(calc);
} END_TEST

// Test suite creation example
// The Suite function returns a pointer to a suite
// Declare a pointer for Suite and TCase
// Add the test function created above (test_money_create) to the test case tc_core using the function tcase_add_test
// Add the test case tc_core to the suite s using the function suite_add_tcase
Suite *calc_test_suite(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create("CalcTest");
  tc_core = tcase_create("Core");

  tcase_add_test(tc_core, test_calc_input1);
  tcase_add_test(tc_core, test_calc_input2);
  tcase_add_test(tc_core, test_calc_add);
  tcase_add_test(tc_core, test_calc_add_fail);
  suite_add_tcase(s, tc_core);

  return s;
}


int main(void) {
  int no_failed = 0; // to store failed cases
  Suite *s;
  SRunner *runner; //

  s = calc_test_suite(); // Test suite created above
  runner = srunner_create(s);

  srunner_run_all(runner, CK_NORMAL);
  no_failed = srunner_ntests_failed(runner);
  srunner_free(runner);
  return (no_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
