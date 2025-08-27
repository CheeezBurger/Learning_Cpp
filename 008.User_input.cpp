#include <iostream>

// IMPORTANT - When using this code, make sure to go to file > preferences > settings, and turn on "run in terminal"
// This allows you to accept user input

// cout << (<< = insertion operator)
// cin >> (>> = extraction operator)

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
