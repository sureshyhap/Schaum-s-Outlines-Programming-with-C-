///////////////////////////////// 
/////////////////////////////////
//STILL HAVE TO IMPLEMENT TIES///
/////////////////////////////////
/////////////////////////////////

#include <iostream>
#include "Deck.h"

int determine_winner(const Hand& h1, const Hand& h2);
bool string_compare(char* s1, char* s2);
int string_length(char* s);

int main(int argc, char* argv[]) {
  Deck d;
  Hand player1, player2;
  d.deal(player1);
  d.deal(player2);
  player1.sort(&(player1.merge_sort), 0, 5);
  player2.sort(&(player2.merge_sort), 0, 5);
  std::cout << player1 << std::endl << std::endl;
  std::cout << player2 << std::endl << std::endl;
  int winner = determine_winner(player1, player2);
  if (winner == -1) {
    std::cout << "Player 1 wins!" << std::endl;
  }
  if (winner == 1) {
    std::cout << "Player 2 wins!" << std::endl;
  }
  if (winner == 0) {
    std::cout << "Tie!" << std::endl;
  }
  
  
  return 0;
}

// -1 -> player 1 wins
// 0 -> tie
// 1 -> player 2 wins
int determine_winner(const Hand& h1, const Hand& h2) {
  if (h1.best_value() > h2.best_value()) {
    return -1;
  }
  else if (h1.best_value() < h2.best_value()) {
    return 1;
  }
  else {
    return 0;
  }
}

bool string_compare(char* s1, char* s2) {
  if (string_length(s1) != string_length(s2)) {
    return false;
  }
  for (int i = 0; i < string_length(s1); ++i) {
    if (s1[i] != s2[i]) {
      return false;
    }
  }
  return true;
}

int string_length(char* s) {
  int length = 0;
  for (int i = 0; s[i] != '\0'; ++i) {
    ++length;
  }
  return length;
}
