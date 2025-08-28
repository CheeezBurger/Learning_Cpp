#include <iostream>

// This program demonstrates the use of namespaces in C++.
// Namespaces are used to organize code into logical groups and to prevent name collisions in large projects
// As each entity needs a different name
// A namespace allows for identically named entities as long as the namespaces are different

namespace first{
	int x = 1;
}

namespace second{
	int x = 2;
}

int main(){
	
  int x = 0;

  std::cout << x << '\n';   // This prints the value of x found in the main function
  std::cout << first::x << '\n';   // This prints the value of x found in the "first" namespace
  std::cout << second::x << '\n';  // This prints the value of x found in the "second" namespace
    
	return 0;
}

/* Can also be done like this:

int main(){

  using namepace first;
  std::cout << x;

  return 0;
}
*/