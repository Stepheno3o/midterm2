#include <iostream>
#include "input.h"

int main() {
  std::cout << "Do you like video games? Enter \"yes\" or \"no\": ";
  bool likes_games = false;

  
  likes_games = GetYesOrNoInput();

  if (likes_games) {
    std::cout << "Awesome! You like playing video games!" << std::endl;
  } else {
    std::cout << "Darn!" << std::endl;
  }
  return 0;
}
