#include <iostream>

// This program demonstrates the use of logical functions in C++
// Logical functions are used to combine multiple conditions into statements

// The three main logical operators are:
// && = checks if two conditions are true (AND function)
// || = checks if at least one of two conditions is true (OR function)
// ! = reverses the logical state of its operand (if a condition is originally true, it becomes false - if a condition is originally false, it becomes true)

int main()
{
    int temp;
    bool sunny = true;

    std::cout << "Enter the temperature: ";
    std::cin >> temp;

    // Using "&&"
    if(temp > 0 && temp < 30){
        std::cout << "The temperature is good!" << "\n";
    }
    else{
        std::cout << "The temperature is bad!" << "\n";
    }
    // This code checks if "temp" is more than 0 AND less than 30

    
    // Using "||" - This does the same as the previous block of code
    if(temp <= 0 || temp >= 30){
        std::cout << "The temperature is bad!\n";
    }
    else{
        std::cout << "The temperature is good!\n";
    }

    // Using "!"
    if(!sunny == true){      // This can also be written as "if(sunny)" when checking if a boolean variable is true
        std::cout << "It is cloudy outside!\n";
    }
    else{
        std::cout << "It is sunny outside!\n";
    }

    return 0;
}