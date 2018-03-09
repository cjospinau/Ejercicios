#include <iostream>
#include <cstdio> //para usar printf
#include <cmath>

double f(double x);
double fderivforward(double x, double h);
int main()
{
  double x = M_PI/3;
  double h = 0.1;
  std::printf("%25.16e\n", fderivforward(x,h)); 
  return 0;
}

double f(double x)
{
  double result = std::sin(x);
  
  return result;
}

double fderivforward(double x,double h)

{
  double result = (f(x+h) - f(x))/h;
  return result;
}
