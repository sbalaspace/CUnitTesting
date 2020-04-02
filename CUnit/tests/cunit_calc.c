#include "../include/calc.h"
#include "CUnit/Basic.h"
#include "CUnit/Console.h"
#include "CUnit/Automated.h"

int init_suite(void) { return 0; }
int clean_suite(void) { return 0; }

// Test function example
// Test case to check input1
void test_calc_input1(void)
{
  Calc* calc;
  extern Calc* create_input(double, double);

  calc = create_input(1.0, 2.0);

  CU_ASSERT(calc_input1(calc) > 0 && calc_input1(calc) < 1);

  free_calc(calc);
}

// Test case to check input2
void test_calc_input2(void)
{
  Calc* calc;
  extern Calc* create_input(double, double);

  calc = create_input(1.0, 2.0);

  CU_ASSERT(calc_input2(calc) > 1.99 && calc_input2(calc) < 2.01);

  free_calc(calc);
}

int main(void) {
  CU_pSuite pSuite1 = NULL;

  // Initialize CUnit test registry
  if (CUE_SUCCESS != CU_initialize_registry())
  return CU_get_error();

  // Add suite1 to registry
  pSuite1 = CU_add_suite("Basic Test Suite1", init_suite, clean_suite);
  if (NULL == pSuite1){
    CU_cleanup_registry();
    return CU_get_error();
  }

  CU_TestInfo test_array1[] = {
    { "testinput1", test_calc_input1 },
    { "testinput2", test_calc_input2 },
    CU_TEST_INFO_NULL,
  };

  // Add test1 to suite1
  if ((NULL == CU_add_test(pSuite1, "\n\n..... Tesing Inputs ......\n\n", test_calc_input1))){
    CU_cleanup_registry();
    return CU_get_error();
  }


  CU_basic_run_tests();// OUTPUT to the screen

  CU_cleanup_registry();//Cleaning the Registry
  return CU_get_error();

}
