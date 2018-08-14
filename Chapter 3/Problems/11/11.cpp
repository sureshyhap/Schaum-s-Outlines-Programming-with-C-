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
  
  enum Result {
	       PLAYER1_WIN, PLAYER2_WIN, TIE, ERROR
  };
  Result result;
  result = (p1 == ROCK ? (p2 == ROCK ? TIE : (p2 == PAPER ? PLAYER2_WIN : PLAYER1_WIN)) :
	    ((p1 == PAPER ? (p2 == PAPER ? TIE : (p2 == SCISSORS ? PLAYER2_WIN : PLAYER1_WIN)) :
	      (p1 == SCISSORS ? (p2 == SCISSORS ? TIE : (p2 == ROCK ? PLAYER2_WIN : PLAYER1_WIN)) :
	       ERROR))));

  switch (result) {
  case PLAYER1_WIN:
    std::cout << "Player 1 won!";
    break;
  case PLAYER2_WIN:
    std::cout << "Player 2 won!";
    break;
  case TIE:
    std::cout << "Tie";
    break;
  case ERROR:
    std::cout << "Error";
    break;
  }
  
  return 0;
}
