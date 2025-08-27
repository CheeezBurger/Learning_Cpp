#include <iostream>

int main()
{
    int x;      // Declaration
    x = 5;      // Assignment of the variable's value
    int y = 6;       // You can also declare and assign a value all in one step
    int sum = x + y;
    
    std::cout << x << '\n' ;
    std::cout << y << '\n';
    std::cout << sum << '\n';


    // There are different data types depending on what you need to store within a variable
    
    // Integer (can only store a whole number)
    int age = 13;
    int year = 2024;
    int cars = 54;
        // These are all whole numbers
        
        
    std::cout << year << '\n';

    // double (number including decimal)
    double price = 10.99;
    double average = 2.5;
    double temperature = 25.75;

    std::cout << temperature << '\n';

    // char (stores a single character)
    char grade = 'A';
    char initial = 'B';
    char currency = '$';

    std::cout << currency << '\n';

    // boolean (true or false)
    bool student = true;
    bool power = false;
    bool sale = true;

    std::cout << power << '\n';

    // string (object that represents a sequence of text)
    std::string name = "CheeezBurger";
    std::string day = "Thursday";
    std::string food = "Pizza";
    std::string address = "123 Fake St.";

    std::cout << address << '\n';

    std::cout << '\n';
    std::cout << "Hello " << name << '\n';  // This prints hello and then the variable
    std::cout << "You are " << age << " years old." << '\n';

    return 0;
}
