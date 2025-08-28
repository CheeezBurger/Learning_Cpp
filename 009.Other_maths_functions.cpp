#include <iostream>
#include <cmath>

// This program demonstrates various mathematical functions in C++
// Including max, min, power, square root, absolute value, rounding up and down

int main(){

    double x = 3;
    double y = 4;
    double max;
    double min;
    double power;
    double square_root;
    double absolute_value;
    double pi = 3.14;
    double rounded;
    double round_up;
    double round_down;

    max = std::max(x, y);        // This selects the higher value
    min = std::min(x, y);        // This selects the lower value
    power = pow(2, 3);           // This raises 2 to the power of 3
    square_root = sqrt(9);       // This calculates the square root of 9
    absolute_value = abs(-4);    // This shows how far the number is from 0
    rounded = round(pi);         // This rounds the number up or down depending on what is closer
    round_up = ceil(pi);         // This always rounds the number up
    round_down = floor(pi);      // This always rounds the number down
    
    std::cout << max << '\n';
    std::cout << min << '\n';
    std::cout << power << '\n';
    std::cout << square_root << '\n';
    std::cout << absolute_value << '\n';
    std::cout << rounded << '\n';
    std::cout << round_up << '\n';
    std::cout << round_down << '\n';

    return 0;
}
