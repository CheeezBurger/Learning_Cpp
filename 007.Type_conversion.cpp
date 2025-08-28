#include <iostream>

// This program demonstrates type conversion in C++
// Type conversion = Conversion of one type of data to another
//                   Implicit = Automatic
//                   Explicit = Precede value with new data type (e.g. "int")

int main(){

    int x = 3.14;
    std::cout << x << '\n';
    // This prints 3, the decimal is truncated (removed)
    // The computer implicitly converts the value from a double to an int

    double y = (int) 3.14;
    std::cout << y << '\n';
    // This prints 3, the decimal is truncated
    // The value of y is explicity converted from a double to an int
    
    
    int correct = 8;
    int questions = 10;
    double score = correct/(double)questions * 100;
    std::cout << score << "%";
    // This calculates the score as a percentage
    // It is neccessary to explicitly convert the questions int to a double so that it retains the decimal and completes the equation

    return 0;
}
