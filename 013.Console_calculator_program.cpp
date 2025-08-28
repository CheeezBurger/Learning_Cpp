#include <iostream>

// This program is a simple calculator that takes two numbers and an operator as input, and outputs the result of the operation

// IMPORTANT - When using this code, make sure to go to file > preferences > settings, and turn on "run in terminal"
// This allows you to accept user input

int main(){

    char op;
    double num1;
    double num2;
    double result;

    std::cout << "********** CALCULATOR **********" << '\n';

    std::cout << "Enter either (+ - * /): ";
    std::cin >> op;

    std::cout << "Enter number 1: ";
    std::cin >> num1;

    std::cout << "Enter number 2: ";
    std::cin >> num2;

    switch(op){
        case '+':
            result = num1 + num2;
            std::cout << "Result: " << result << '\n';
        break;
        case '-':
            result = num1 - num2;
            std::cout << "Result: "<< result << '\n';
        break;
        case '*':
            result = num1 * num2;
            std::cout << "Result: "<< result << '\n';
        break;
        case '/':
            result = num1 / num2;
            std::cout << "Result: "<< result << '\n';
            break;
        default:
            std::cout << "That wasn't a valid operator." << '\n';
            break;
    }

    std::cout << "********************************" << '\n';
   
    return 0;
}