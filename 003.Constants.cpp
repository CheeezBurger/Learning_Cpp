#include <iostream>

// This program demonstrates the use of constants in C++
// A constant is a variable whose value can only be changed at the declaration
// Constants are useful for values that should not change throughout the program (e.g. Pi, gravity, etc.)
// It is common practice to capitalise the variable name of a constant

int main()
{
  const double PI = 3.1415926372;
  double radius = 10;
  double circumferance = 2 * PI * radius;
  std::cout << circumferance << "cm" << '\n';

  const int LIGHT_SPEED = 299792458;
  const double WIDTH = 1096;
  const double HEIGHT = 1275;

  std::cout << LIGHT_SPEED << '\n';

  return 0;
}
