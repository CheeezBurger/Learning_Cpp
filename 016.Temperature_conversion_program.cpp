#include <iostream>

// This program converts temperatures between Celsius and Fahrenheit

int main(){

    double temp;
    char unit;

    std::cout << "***** Temperature Conversion *****\n";
    std::cout << "C = Celsius\n";
    std::cout << "F = Fahrenheit\n";
    std::cout << "What unit would you like to convert to: ";
    std::cin >> unit;

    if(unit == 'c' || unit == 'C'){
        std::cout << "Enter the temperature in Fahrenheit: ";
        std::cin >> temp;

        temp = (1.8 * temp) + 32.0;
        std::cout << "The temperature is: " << temp << "C\n";
    }
    else if (unit == 'f' || unit == 'F'){
        std::cout << "Enter the temperature in Celsius: ";
        std::cin >> temp;

        temp = (temp - 32) / 1.8;
        std::cout << "The temperature is: " << temp << "F\n";
    }
    else{
        std::cout << "Please only enter either C or F\n";
    }

    std::cout << "**********************************\n";

    return 0;
}