#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include <cmocka.h>
#include "calc.h"


// Test function example
// Test case to check input1
static void test_calc_input1()
{
  Calc* calc;
  extern Calc* create_input(double, double);

  calc = create_input(1.0, 2.0);

  assert_float_equal(calc_input1(calc), 1, 1e-4);

  free_calc(calc);
}
// Test case to check input1
static void test_calc_input2()
{
  Calc* calc;
  extern Calc* create_input(double, double);

  calc = create_input(1.0, 2.0);

  assert_float_equal(calc_input2(calc), 2, 1e-4);

  free_calc(calc);
}
// Test case to check add
static void test_calc_add()
{
  Calc* calc;
  extern Calc* create_input(double, double);

  calc = create_input(1.0, 2.0);

  assert_float_equal(add(calc), 3, 1e-4);

  free_calc(calc);
}
// Test case to check add
static void test_calc_add_fail()
{
  Calc* calc;
  extern Calc* create_input(double, double);

  calc = create_input(1.0, -2.0);

  assert_float_equal(add(calc), 3, 1e-4);

  free_calc(calc);
}

int main(int argc, char **argv)
{
  const UnitTest tests[] = 
  {
    unit_test(test_calc_input1),
    unit_test(test_calc_input2),
    unit_test(test_calc_add),
    unit_test(test_calc_add_fail),
  };
  return run_tests(tests);
}


