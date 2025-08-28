#include <iostream>

// This program demonstrates various string methods in C++
// Including length, empty, find, insert, append, and clear

// Indexing starts with 0 as the first character

int main(){

    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);   // This is used instead of std::cin to allow spaces in the input

    if(name.length() > 12){     // ".length()" returns the length of the string that is stored in the variable before the dot
        std::cout << "Your name can't be over 12 characters long\n";
    }
    else{
        std::cout << "Welcome " << name << "\n";
    }

    if(name.empty()){        // ".empty()" checks if the string is empty, as a boolean value
        std::cout << "You didn't enter your name!\n";
    }
    else{
        std::cout << "Hello " << name << "\n";
    }

    std::cout << "The first space is at index: " << name.find(" ") << '\n';   // ".find()" searches for the string in the brackets and returns the index of the first occurrence of the string
    

    name.insert(0, "@");   // ".insert()" inserts the string in the brackets at the index specified by the first argument in the brackets
    std::cout << "Your username is: " << name << "\n";

    name.append("@outlook.com");   // ".append()" adds the string in the brackets to the end of the string before the dot
    std::cout << "Your email is: " << name << "\n";

    name.clear();          // ".clear()" clears the string, making it empty
    std::cout << "Your name is: " << name << "\n";

    return 0;
}