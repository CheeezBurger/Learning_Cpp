#include <iostream>

// Type conversion = Conversion of one type of data to another.
//                   Implicit = Automatic.
//                   Explicit = Precede valu with new data type (int).

int main(){

    int x = 3.14;
    std::cout << x << '\n';
    // This prints 3, the decimal is truncated.
    // The computer implicitly converts the value from a double to an int.

    double y = (int) 3.14;
    std::cout << y << '\n';
    // This prints 3, the decimal is truncated.
    // The value of y is explicity converted from a double to an int.
    
    
    int correct = 8;
    int questions = 10;
    double score = correct/(double)questions * 100;
    std::cout << score << "%";
    // This calculates the score as a percentage. 
    // It is neccessary to explicitly convert the questions int to a double so that it retains the decimal and completes the equation.

    
    return 0;
}