#include <iostream>

// This program demonstrates the use of variables in C++
// A variable is a named space in memory that stores a value
// Variables must be declared with a specific data type before they can be used
// Common data types include int, double, bool, char, and std::string

int main()
{
    int x;      // Declaration of the variable
    x = 5;      // Assignment of the variable's value
    int y = 6;       // Declaration and assignment in one line
    int sum = x + y;
    
    std::cout << x << '\n' ;
    std::cout << y << '\n';
    std::cout << sum << '\n';


    // There are different data types depending on what needs to be stored within a variable:

    // Integer (int) - only stores a whole number
    int age = 13;
    int year = 2024;
    int cars = 54;
    std::cout << year << '\n';

    // Double (double) - stores a number including decimal
    double price = 10.99;
    double average = 2.56317;
    double temperature = 25.75;
    std::cout << temperature << '\n';

    // Boolean (bool) - stores true or false
    bool student = true;
    bool power = false;
    bool sale = true;
    std::cout << power << '\n';

    // Character (char) - only stores a single character
    char grade = 'A';
    char initial = 'B';
    char currency = '$';
    std::cout << currency << '\n';

    // String (std::string) - stores a sequence of text
    std::string name = "CheeezBurger";
    std::string day = "Thursday";
    std::string food = "Pizza";
    std::string address = "123 Fake St.";
    std::cout << address << '\n';

    std::cout << '\n' << "Hello " << name << '\n';  // This prints a new line, hello, the variable, and then a new line
    std::cout << "You are " << age << " years old" << '\n';

    return 0;
}
