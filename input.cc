#include <iostream>
#include <string>

bool GetYesOrNoInput() {
  std::string answer;
  std::cin >> answer;
  while (answer != "yes" && answer != "no") {
    std::cout << "I couldn't get that, try again: ";
    std::cin >> answer;
  }
  if (answer == "yes") {
    return true;
  }

  if (answer == "no") {
    return false;
  }
  return 0;
}

