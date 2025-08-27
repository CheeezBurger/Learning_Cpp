#include <iostream>

// IMPORTANT - When using this code, make sure to go to file > preferences > settings, and turn on "run in terminal"
// This allows you to accept user input

// If statements run code if a condition is true
// If not, then don't run the code

int main(){

    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if(age >= 18){
        std::cout << "Welcome to the site." << '\n';
    }
    // This checks if a statement is true. If it is, it runs the code. If it isn't, it continues on
    else if(age < 0){
        std::cout << "You haven't been born yet." << '\n';
    }
    // This checks a different condition if the previous statement was false.
    else if (age == 100){
        std::cout << "You are 100 years old, congratulations";
    }
    // This checks if the age = 100. Two '=' are nescessary otherwise it would set the value of the variable instead of checking it
    else {
        std::cout << "You aren't old enough to enter." << '\n';
    }
    // This code runs if all the previous statements where false

    return 0;
}