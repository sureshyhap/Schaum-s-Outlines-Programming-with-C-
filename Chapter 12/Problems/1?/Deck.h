#include "Hand.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

class Deck {
 public:
  Deck();

  void shuffle();
  void deal(Hand& player);
 private:
  static const int MAX_CARDS_IN_DECK = 52;
  static const int MAX_RANK = 13;
  static const int MAX_SUIT = 4;
  Card deck[MAX_CARDS_IN_DECK];
  int top_of_deck;
};

Deck::Deck() {
  top_of_deck = 0;
  int k = 0;
  for (int i = 1; i < MAX_RANK + 1; ++i) {
    for (int j = 1; j < MAX_SUIT + 1; ++j, ++k) {
      Card card(i, j);
      deck[k] = card;
    }
  }
  shuffle();
}

void Deck::shuffle() {
  Card b[Deck::MAX_CARDS_IN_DECK];
  int nums[Deck::MAX_CARDS_IN_DECK];
  for (int i = 0; i < Deck::MAX_CARDS_IN_DECK; ++i) {
    nums[i] = 1;
  }
  unsigned int seed = time(NULL);
  srand(seed); 
  for (int i = 0; i < Deck::MAX_CARDS_IN_DECK; ++i) {
    
    int rand_num = (rand() % MAX_CARDS_IN_DECK);
    bool chosen_already = false;
    
    do {
      if (nums[rand_num] == 0) {
	chosen_already = true;
	rand_num = (++rand_num % Deck::MAX_CARDS_IN_DECK);
      }
    } while (chosen_already == true);
    nums[rand_num] = 0;
    
    b[i] = deck[rand_num];
  }
  for (int i = 0; i < Deck::MAX_CARDS_IN_DECK; ++i) {
    deck[i] = b[i];
  }
}

void Deck::deal(Hand& player) {
  for (int i = 0; i < 5; ++i) {
    player[i] = deck[top_of_deck];
    ++top_of_deck;
  }
}
