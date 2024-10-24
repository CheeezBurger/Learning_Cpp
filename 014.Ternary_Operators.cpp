#include <iostream>

// Ternary operator '?:' is a replacement for the if/else statement.
// condition ? expression1 : expression2;
//               If true      If false
int main()
{
    int grade = 75;
    grade >= 50 ? std::cout << "You passed!" << '\n' : std::cout << "You failed..." << '\n';
    // If grade is greater than or equal to 50, print "You passed!", if not, print "You failed..."

    int number = 9;
    number % 2 == 1 ? std::cout << "ODD" : std::cout << "Even";

    return 0;
}