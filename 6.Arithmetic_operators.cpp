#include <iostream>

    // Arithmetic operators return the result of a specific arimtic operation.
    // (+ - * /)

int main(){

    int class1 = 20;
    int class2 = 20;
    int class3 = 20;
    int class4 = 20;

    //students = students + 1;  This can be used, but is long
    //students++;   This adds only one.
    //students+=2;  This is the ideal one to use.
    //addition (+), subraction (-), multiplication (*), division (/).


    class1+=10;
    std::cout << class1 << '\n';

    class2-=10;
    std::cout << class2 <<'\n';

    class3*=10;
    std::cout << class3 << '\n';

    class4/=10;
    std::cout << class4 << '\n';

    return 0;
}
