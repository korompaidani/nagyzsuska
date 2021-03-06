//============================================================================
// Name        : 6.cpp
// Author      : Zsuzsanna Nagy
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;

/**
 * Create a function called "fliter_greater_than_5" that takes a pointer to an int array, and it's size.
 * It should return a pointer to a new array that only consists the numbers that are bigger than 5.
 */

void printer(int* array, int size){
  for(int i = 0; i < size; i++) {
    cout << array[i] << " ";
  }
  cout  << endl;
}

int* filter_greater_than_5(int* array, int size) {
  int counter = 0;
  for (int i = 0; i < size ; i++) {
    if (array[i] > 5) {
      counter++;
    }
  }
  int* new_array = new int[counter];
  int k = 0;
  for (int i = 0; i < size; i++) {
    if (array[i] > 5) {
      new_array[k] = array[i];
      k++;
    }
  }
  printer(new_array, counter);
  return new_array;
  delete[] new_array;
}

int main() {
  int size = 10;
  int* array = new int[size];
  for(int i = 0; i < size; i++) {
    array[i] = i;
  }
  printer(array, size);
  array = filter_greater_than_5(array, size);
  delete[] array;
  return 0;
}
