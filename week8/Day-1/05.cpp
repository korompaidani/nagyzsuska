// Define a function like macro that prints out the parameter it gets,
// and adds this string before it "DEBUG: " if __DEBUG is defined.
// Otherwise adds "RELEASE: " before the string.
// Use try it out. Illustrate that it works.


#include <iostream>
#ifdef __DEBUG
#define printer(a) std::cout << "DEBUG: " << a << std::endl
#else
#define printer(a) std::cout << "RELEASE: " << a << std::endl
#endif

int main() {
  int a = 123;
  printer(a);
  return 0;
}