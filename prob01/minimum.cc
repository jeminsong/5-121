// Jemin Song
// CPSC 121L-02
// 2/26/2024
// jeminsong0119@csu.fullerton.edu
// @jeminsong
//
// Lab 5-1
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater

#include "minimum.h"

int IndexOfMinimumElement(std::vector<double> &input) {
  if (input.empty()) {
    return -1;
  }
  double min_val = input[0];
  int min_index = 0;
  for (int i = 1; i < input.size(); ++i) {
    if (input[i] < min_val) {
      min_val = input[i];
      min_index = i;
    }
  }
  return min_index;
}