#include <iostream>

// Ternary operator '?:' is a replacement for the if/else statement.
// condition ? expression1 : expression2;
//               If true      If false
int main()
{
    int grade = 75;
    grade >= 50 ? std::cout << "You passed!" : std::cout << "You failed...";
    // If grade is greater than or equal to 50, print "You passed!", if not, print "You failed..."

    

    return 0;
}