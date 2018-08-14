#include <iostream>

int main() {
  enum Hand {
	     ROCK, PAPER, SCISSORS
  };
  Hand p1, p2;
  
  std::cout << "Player 1 enter 'r' for rock, 'p' for paper, 's' for scissors:";
  char choice1;
  std:: cin >> choice1;
  
  switch (choice1) {
  case 'r':
    p1 = ROCK;
    break;
  case 'p':
    p1 = PAPER;
    break;
  case 's':
    p1 = SCISSORS;
    break;
  }

  std::cout << "Player 2 enter 'r' for rock, 'p' for paper, 's' for scissors:";
  char choice2;
  std:: cin >> choice2;
  
  switch (choice2) {
  case 'r':
    p2 = ROCK;
    break;
  case 'p':
    p2 = PAPER;
    break;
  case 's':
    p2 = SCISSORS;
    break;
  }

  if ((p1 == ROCK && p2 == SCISSORS) || (p1 == PAPER && p2 == ROCK) || (p1 == SCISSORS && p2 == PAPER)) {
    std::cout << "Player 1 wins!";
  }
  else if ((p2 == ROCK && p1 == SCISSORS) || (p2 == PAPER && p1 == ROCK) || (p2 == SCISSORS && p1 == PAPER)) {
    std::cout << "Player 2 wins!";
  }
  else {
    std::cout << "Tie!";
  }
  
  return 0;
}
