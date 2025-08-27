#include <iostream>

// IMPORTANT - When using this code, make sure to go to file > preferences > settings, and turn on "run in terminal"
// This allows you to accept user input

int main(){

    int month;
    std::cout << "Enter the month (1-12): ";
    std::cin >> month;

    switch(month){
        case 1:     // Cases replace multiple 'else if' statements. They look cleaner and are easier to read
            std::cout << "It is January" << '\n';
            break;
        case 2:
            std::cout << "It is February" << '\n';
            break;
        case 3:
            std::cout << "It is March" << '\n';
            break;
        case 4:
            std::cout << "It is April" << '\n';
            break;
        case 5:
            std::cout << "It is May" << '\n';
            break;
        case 6:
            std::cout << "It is June" << '\n';
            break;
        case 7:
            std::cout << "It is July" << '\n';
            break;
        case 8:
            std::cout << "It is August" << '\n';
            break;
        case 9:
            std::cout << "It is September" << '\n';
            break;
        case 10:
            std::cout << "It is October" << '\n';
            break;
        case 11:
            std::cout << "It is November" << '\n';
            break;
        case 12:
            std::cout << "It is December" << '\n';
            break;
        default:    // Like an 'else' statement - runs if all other cases were false
            std::cout << "Please enter in only numbers 1-12" << '\n';
    }

    
    char grade;

    std::cout << "What grade did you get? ";
    std::cin >> grade;

    switch(grade){
        case 'A':
            std::cout << "You did great!"  << '\n';
            break;
        case 'B':
            std::cout << "You did alright." << '\n';
            break;
        case 'C':
            std::cout << "You did average." << '\n';
            break;
        case 'D':
            std::cout << "You did bad" << '\n';
            break;
        case 'E':
            std::cout << "You failed miserably." << '\n';
            break;
        case 'F':
            std::cout << "You're a FAILURE." << '\n';
            break;
        default:
            std::cout << "Please only enter in a letter grade A-F." << '\n';
    }

    return 0;
}
