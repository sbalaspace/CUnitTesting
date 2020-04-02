#ifndef CALC_H
#define CALC_H

typedef struct Calc Calc;

Calc *create_input(double input1, double input2);
double calc_input1(Calc* calc);
double calc_input2(Calc* calc);
double add(Calc* calc);
void free_calc(Calc* calc);

#endif  /* CALC_H */
