#include <iostream>

// IMPORTANT - When using this code, make sure to go to file, preferences, settings, and search for code runner. Look for 'run in terminal' and switch it on. 
// This allows you to accept user input.

// If statements do something if a condition is true.
// If not, then don't do it.

int main(){

    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if(age >= 18){
        std::cout << "Welcome to the site." << '\n';
    }
    // This checks if a statement is true. If it is, it runs the code. If it isn't, it does nothing.
    else if(age < 0){
        std::cout << "You haven't been born yet." << '\n';
    }
    // This checks a different thing if the previous statement was false. If it is true it runs the code. If it isn't true, it does nothing.
    else if (age == 100){   // This checks if the age = 200. Two '=' are nescessary otherwise we would be setting the value of age, not checking it.
        std::cout << "You are 100 years old, congratulations";
    }
    else {
        std::cout << "You aren't old enough to enter." << '\n';
    }
    // This code runs if all the previous statements where false.

    return 0;
}