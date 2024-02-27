// Jemin Song
// CPSC 121L-02
// 2/26/2024
// jeminsong0119@csu.fullerton.edu
// @jeminsong
//
// Lab 5-1
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater

#include <iostream>
#include <vector>

#include "minimum.h"

int main() {
  int size = 0;
  std::cout << "How many elements? ";
  std::cin >> size;

  std::vector<double> numbers(size);
  for (int i = 0; i < size; i++) {
    double value = 0;
    std::cout << "Element " << i << ": ";
    std::cin >> value;
    numbers.at(i) = value;
  }
  int min_index = IndexOfMinimumElement(numbers);
  std::cout << "The minimum value in your vector is at index " << min_index
            << std::endl;
  return 0;
}