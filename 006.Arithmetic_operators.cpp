#include <iostream>

    // Arithmetic operators return the result of a specific arimtic operation
    // (+ - * /)

int main(){

    int class1 = 20;
    int class2 = 20;
    int class3 = 20;
    int class4 = 20;
    int class5 = 20;

    // "students = students + 1;" This can be used, but is long
    // "students++;" This adds only one
    // "students+=2;  This is the ideal one to use

    // Addition (+), subraction (-), multiplication (*), division (/)

    // The modulus operator '%' shows the remainder of a number after it is divided by another number

    class1+=10;
    std::cout << class1 << '\n';
    // 20 + 10

    class2-=10;
    std::cout << class2 <<'\n';
    // 20 - 10

    class3*=10;
    std::cout << class3 << '\n';
    // 20 x 10

    class4/=10;
    std::cout << class4 << '\n';
    // 20 / 10

    int remainder = class5 % 3;
    std::cout << remainder << '\n';
    // The remainder of 20 / 3

    return 0;
}
