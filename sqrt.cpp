#include <iostream>
#include <cmath>

void raiz(double x)
{ for (x = 0.1; x<= 1.0e2; x = x+2)
    {
      std::cout << x << "\t" << std::sqrt(x) << std::endl;
    }
}

int main()

{ double x;
  raiz(x);
  return 0; }
