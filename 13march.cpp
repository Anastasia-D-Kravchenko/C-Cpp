//
// Created by s32802 on 2025-03-13.
//
#include <iostream>
#include <string.h>

int main() {
  auto str = std::string();
  std::cout << "Input your name: ";
  std::cin >> str;
  if (str == "Einstein") {
    std::cout << "I know you!";
  } else {
    std::cout << "Greetings.";
  }

}