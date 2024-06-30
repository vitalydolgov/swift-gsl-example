#ifndef math_h
#define math_h

typedef double (* funp)(double, void *);

double derivative (funp f, double x, double err);
double integral (funp f, double a, double b, double err);

#endif
