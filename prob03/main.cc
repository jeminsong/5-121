// Jemin Song
// CPSC 121L-02
// 2/26/2024
// jeminsong0119@csu.fullerton.edu
// @jeminsong
//
// Lab 5-3
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater

#include <iostream>
#include <map>
#include <string>

int main() {
  std::string text;
  std::cout << "Enter text to analyze: ";
  std::getline(std::cin, text);
  std::map<char, int> char_frequency;
  for (char c : text) {
    char_frequency[c]++;
  }
  char input = 'Q';
  while (true) {
    std::cout << "What character do you want stats on? ";
    std::cin >> input;
    if (input == 'Q') {
      break;
    }
    if (char_frequency.count(input) > 0) {
      std::cout << "The character " << input << " appears "
                << char_frequency[input] << " times." << std::endl;
    } else {
      std::cout << "The character " << input << " appears 0 times."
                << std::endl;
    }
  }
  std::cout << "Goodbye!" << std::endl;
  return 0;
}