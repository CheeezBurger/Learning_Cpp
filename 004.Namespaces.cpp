#include <iostream>
/* Namespaces provide a solution for preventing name conflicts in large projects. Each entity needs a different name. 
   A namespace allows for iddentically named entities as lonog as the namespaces are different.

*/


namespace first{
	int x = 1;
}

namespace second{
	int x = 2;
}

int main(){
	
  int x = 0;

  std::cout << x << '\n';   // This prints the value of x found in the main function.
  std::cout << first::x << '\n';   // This prints the value of x found in the "first" namespace.
  std::cout << second::x << '\n';  // This prints the value of x found in the "second" namespace.
    
	return 0;
}

/* Also can do it like this.

int main(){

  using namepace first;
  std::cout << x;

  return 0;
}
*/