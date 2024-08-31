#include <iostream>

int main()
{
  // const makes the variable read only, and the only way to change it is to change it at the source.
  const double PI = 3.1415926372;
  double radius = 10;
  double circumferance = 2 * PI * radius;
  std::cout << circumferance << "cm" << '\n';

  const int LIGHT_SPEED = 299792458;   // It is common practive to capitalise the variable name of a constant.
  const double WIDTH = 1096;
  const double HEIGH = 1275;

  std::cout << LIGHT_SPEED << '\n';


  return 0;
}
