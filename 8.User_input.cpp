#include <iostream>

// cout << (<< = insertion operator)
// cin >> (>> = extraction operator)

// IMPORTANT - When using this code, make sure to go to file, preferences, settings, and search for code runner. Look for 'run in terminal' and switch it on. 
// This allows you to accept user input.

int main(){
    
    std::string name;
    int age;

    std::cout << "What's your age?: ";
    std::cin >> age;

    std::cout << "What's your full name?: ";
    std::getline(std::cin >> std::ws, name);

    std::cout << "Hello " << name << '\n';
    std::cout << "You're " << age << " years old." << '\n';

    return 0;
}