#include <iostream>
#include <vector>

// This program demonstrates the use of "typedef" and "using" to create type aliases in C++

// "Typedef" is a reserved keyword used to create a new identifier (name) for an existing data type
// It helps with readibility and reduces typos
  
// "typedef std::vector<std::pair<std::string, int >> pairlist_t;"
    
// The long piece of code can be referred to by typing in "pairlist_t"
// Put "_t" after the new name

// A better alternative for "typedef" is "using"
// "using std::vector<std::pair<std::string, int >> pairlist_t;"

using text_t = std::string;
using num_t = int;

int main() {

    text_t firstName = "CheeezBurger";
    std::cout << firstName << '\n';
    // This would usually be written as "std::string firstName = CheeezBurger;" but the alias (text_t) allows it to be written like this

    num_t age = 21;
    std::cout << age << '\n';

    return 0;
}