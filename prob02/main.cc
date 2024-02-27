// Jemin Song
// CPSC 121L-02
// 2/26/2024
// jeminsong0119@csu.fullerton.edu
// @jeminsong
//
// Lab 5-2
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater

#include <iomanip>
#include <iostream>
#include <vector>

#include "calculate_avg.h"

int main() {
  int num_students = 0;
  std::cout << "How many students are in your class? ";
  std::cin >> num_students;

  if (num_students <= 0) {
    std::cout << "You have no students!\n";
  } else {
    std::vector<double> student_grades(num_students);

    std::cout << "Enter the GPA for the students in your class (0.0 - 4.0)\n";
    for (int i = 0; i < num_students; i++) {
      std::cout << "Enter the GPA for student #" << i + 1 << ": ";
      std::cin >> student_grades[i];
    }
    double average = CalculateAverage(student_grades);
    std::cout << "Class average: " << std::setprecision(2) << std::fixed
              << average << "\n";
  }
  return 0;
}