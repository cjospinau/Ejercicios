#include <iostream>
#include <cmath>

void lcos(double x)

{ for(x = 0; x <=4*M_PI; x= x + 0.1)
    {
      std::cout << x << "\t" << std::cos(x) << std::endl;
    }}

  int main()

  {
    double x;
    lcos(x);
    return 0;
  }
