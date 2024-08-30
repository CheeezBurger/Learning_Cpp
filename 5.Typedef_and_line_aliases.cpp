#include <iostream>
#include <vector>

/*   Typedef is a reserved keyword used to create an additional name (alias) for another data type.  It is a new identifier for an existing type.
    Helps with readability and reduces typos.*/


typedef std:vector<std::pair<std::string, int>> pairlist_t;
// This means that I can refer to the long piece of code by just typing in "pairlist_t"
// A common convention when using typedef is to put "_t" after the new name.

int example(){
    pairlist_t pairlist;
   return 0;
}

typedef std::string text_t  // This renames std::string as text_t

int main() {

    text_t firstName = CheeezBurger;
    // This woulld usually be written as std::string firstName = CheeezBurger; but the typedef allows it to be written like this.

    std::cout << firstName << '\n';

    return 0;
}
