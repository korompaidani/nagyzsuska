//============================================================================
// Name        : 4.cpp
// Author      : Zsuzsanna Nagy
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;

int main() {
  int numbers[] = {5, 6, 7, 8, 9};
  int* number_pointer = &numbers[0];
  // The "number_pointer" should point to the first element of the array called "numbers",
  // than please print its value with it.
  cout << *number_pointer;
  return 0;
}
