#include <stdlib.h>
#include "calc.h"

struct Calc {
  double input1;
  double input2;
};

Calc *create_input(double input1, double input2) {
  Calc* calc = malloc(sizeof(Calc));
  if (calc == NULL){
    return NULL;
  }

  calc->input1 = input1;
  calc->input2 = input2;

  return calc;
}

double calc_input1(Calc* calc) {
  return calc->input1;
}

double calc_input2(Calc* calc){
  return calc->input2;
}

double add(Calc* calc) {
  return (calc->input1 + calc->input2);
}

void free_calc(Calc* calc) {
  free(calc);
}

