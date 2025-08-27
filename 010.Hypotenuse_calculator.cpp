#include <iostream>
#include <cmath>

// IMPORTANT - When using this code, make sure to go to file > preferences > settings, and turn on "run in terminal"
// This allows you to accept user input

int main(){

    double a;
    double b;
    double c;

    std::cout << "Enter side A: ";
    std::cin >> a;

    std::cout << "Enter side B: ";
    std::cin >> b;

    c = sqrt(pow(a, 2) + pow(b, 2));

    std::cout << "Side C: " << c << '\n';

    return 0;
}
