// Jemin Song
// CPSC 121L-02
// 2/26/2024
// jeminsong0119@csu.fullerton.edu
// @jeminsong
//
// Lab 5-2
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater

#include <vector>

double CalculateAverage(const std::vector<double> &student_grades) {
  if (student_grades.empty()) {
    return 0.0;
  }
  double sum = 0.0;
  for (double grade : student_grades) {
    sum += grade;
  }
  return sum / student_grades.size();
}