#include <iostream>

// Ternary operator '?:' is a replacement for the if/else statement.
// condition ? expression1 : expression2;
//               If true      If false
int main()
{
    int grade = 75;
    grade >= 50 ? std::cout << "You passed!" << '\n' : std::cout << "You failed..." << '\n';
    // If grade is greater than or equal to 50, print "You passed!", if not, print "You failed..."

    int number = 10;
    number % 2 == 1 ? std::cout << "ODD" << '\n' : std::cout << "Even" << '\n';
    // If the number has a remainder of 1, it is odd. If not, it is even.

    bool hungry = false;
    hungry ? std::cout << "You are hungry" << '\n' : std::cout << "You are full" << '\n';
    // To save space, you could also write it as:
    std::cout << (hungry ? "You are hungry" : "You are full") << '\n';
    // This does the same thing, just shorter.

    return 0;
}