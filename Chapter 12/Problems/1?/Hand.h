#include "Card.h"
#include <iostream>
#include <cstring>

class Hand {
  friend std::ostream& operator<<(std::ostream& os, Hand& h);
  friend class Deck;
public:
  Hand();
  Hand(const Hand& h);
  ~Hand();
  Hand& operator=(const Hand& h);
  Card& operator[](int index);
  void determine_best();
  const char* get_best() const;
  int best_value() const;
  void sort(void (Hand::*pf_sort)(int a, int b), int start, int size);
private:
  void merge_sort(int start, int size);
  Card* hand;
  int size_hand;
  const char* best_hand;
  bool is_royal_flush();
  bool is_straight_flush();
  bool is_four_of_a_kind();
  bool is_full_house();
  bool is_flush();
  bool is_straight();
  bool is_three_of_a_kind();
  bool is_two_pair();
  bool is_pair();
  bool is_high_card();
};

std::ostream& operator<<(std::ostream& os, Hand& h) {
  for (int i = 0; i < h.size_hand; ++i) {
    os << h[i] << std::endl;
  }
}

Hand::Hand() {
  hand = new Card[5];
  size_hand = 5;
}

Hand::Hand(const Hand& h) {
  size_hand = h.size_hand;
  hand = new Card[size_hand];
  for (int i = 0; i < size_hand; ++i) {
    hand[i] = h.hand[i];
  }
}

Hand::~Hand() {
  delete [] hand;
}

Hand& Hand::operator=(const Hand& h) {
  delete [] hand;
  size_hand = h.size_hand;
  hand = new Card[size_hand];
  for (int i = 0; i < size_hand; ++i) {
    hand[i] = h.hand[i];
  }
  
}

Card& Hand::operator[](int index) {
  switch (index) {
  case 0:
    return hand[0];
    break;
  case 1:
    return hand[1];
    break;
  case 2:
    return hand[2];
    break;
  case 3:
    return hand[3];
    break;
  case 4:
    return hand[4];
    break;
  }
}

void Hand::determine_best() {
  if (is_royal_flush() == true) {
    best_hand = "ROYAL FLUSH";
  }
  else if (is_straight_flush() == true) {
    best_hand = "STRAIGHT FLUSH";
  }
  else if (is_four_of_a_kind() == true) {
    best_hand = "FOUR OF A KIND";
  }
  else if (is_full_house() == true) {
    best_hand = "FULL HOUSE";
  }
  else if (is_flush() == true) {
    best_hand = "FLUSH";
  }
  else if (is_straight() == true) {
    best_hand = "STRAIGHT";
  }
  else if (is_three_of_a_kind() == true) {
    best_hand = "THREE OF A KIND";
  }
  else if (is_two_pair() == true) {
    best_hand = "TWO PAIR";
  }
  else if (is_pair() == true) {
    best_hand = "PAIR";
  }
  else if (is_high_card() == true) {
    best_hand = "HIGH CARD";
  }

}

const char* Hand::get_best() const {
  return best_hand;
}

int Hand::best_value() const {
  if (strcmp(best_hand, "ROYAL FLUSH")) {
    return 10;
  }
  else if (strcmp(best_hand, "STRAIGHT FLUSH")) {
    return 9;
  }
  else if (strcmp(best_hand, "FOUR OF A KIND")) {
    return 8;
  }
  else if (strcmp(best_hand, "FULL HOUSE")) {
    return 7;
  }
  else if (strcmp(best_hand, "FLUSH")) {
    return 6;
  }
  else if (strcmp(best_hand, "STRAIGHT")) {
    return 5;
  }
  else if (strcmp(best_hand, "THREE OF A KIND")) {
    return 4;
  }
  else if (strcmp(best_hand, "TWO PAIR")) {
    return 3;
  }
  else if (strcmp(best_hand, "PAIR")) {
    return 2;
  }
  else if (strcmp(best_hand, "HIGH CARD")) {
    return 1;
  }

}

void Hand::sort(void (Hand::*pf_sort)(int a, int b), int start, int size) {
  ((this->*pf_sort))(start, size);
  return;
}

void Hand::merge_sort(int start, int size) {
  // Base case
  if (size == 1) {
    return;
  }

  // Dividing the problem into halves
  merge_sort(start, size / 2);
  merge_sort(start + (size / 2), size - (size / 2));

  // Merging
  int i = start, j = start + (size / 2), k = 0;
  Card b[size] = {};
  while (i < start + (size / 2) && j < start + size) {
    if (hand[i] > hand[j]) {
      b[k] = hand[j];
      ++j;
      ++k;
    }
    else {
      b[k] = hand[i];
      ++i;
      ++k;
    }
  }
  if (i == start + (size / 2)) {
    while (j < start + size) {
      b[k] = hand[j];
      ++j;
      ++k;
    }
  }
  else if (j == start + size) {
    while (i < start + (size / 2)) {
      b[k] = hand[i];
      ++i;
      ++k;
    }
  }
  
  for (int count = 0; count < size; ++count) {
    hand[start + count] = b[count];
  }
}

bool Hand::is_royal_flush() {
  if (hand[0].get_rank_numeric() == 10 &&
      hand[1].get_rank_numeric() == 11 &&
      hand[2].get_rank_numeric() == 12 &&
      hand[3].get_rank_numeric() == 13 &&
      hand[4].get_rank_numeric() == 14) {
    return true;
  }
  else {
    return false;
  }
}

bool Hand::is_straight_flush() {
  if (is_straight() && is_flush()) {
    return true;
  }
  else {
    return false;
  }
}

bool Hand::is_four_of_a_kind() {
  if (hand[0].get_rank_numeric() ==
      hand[1].get_rank_numeric() &&
      hand[0].get_rank_numeric() ==
      hand[2].get_rank_numeric() &&
      hand[0].get_rank_numeric() ==
      hand[3].get_rank_numeric()
      ) {
    return true;
  }
  if (hand[1].get_rank_numeric() ==
      hand[2].get_rank_numeric() &&
      hand[1].get_rank_numeric() ==
      hand[3].get_rank_numeric() &&
      hand[1].get_rank_numeric() ==
      hand[4].get_rank_numeric()) {
    return true;
  }
  return false;
}

bool Hand::is_full_house() {
  if (hand[0].get_rank_numeric() ==
      hand[1].get_rank_numeric() &&
      hand[0].get_rank_numeric() ==
      hand[2].get_rank_numeric() &&
      hand[3].get_rank_numeric() ==
      hand[4].get_rank_numeric()) {
    return true;
  }
  if (hand[0].get_rank_numeric() ==
      hand[1].get_rank_numeric() &&
      hand[2].get_rank_numeric() ==
      hand[3].get_rank_numeric() &&
      hand[2].get_rank_numeric() ==
      hand[4].get_rank_numeric()) {
    return true;
  }
  return false;
}

bool Hand::is_flush() {
  if (hand[0].get_suit_numeric() ==
      hand[1].get_suit_numeric() &&
      hand[0].get_suit_numeric() ==
      hand[2].get_suit_numeric() &&
      hand[0].get_suit_numeric() ==
      hand[3].get_suit_numeric() &&
      hand[0].get_suit_numeric() ==
      hand[4].get_suit_numeric()) {
    return true;
  }
  return false;
}

Bool Hand::is_straight() {
  if (hand[4].get_rank_numeric() ==
      1 + hand[3].get_rank_numeric() &&
      hand[3].get_rank_numeric() ==
      1 + hand[2].get_rank_numeric() &&
      hand[2].get_rank_numeric() ==
      1 + hand[1].get_rank_numeric() &&
      hand[1].get_rank_numeric() ==
      1 + hand[0].get_rank_numeric()) {
    return true;
  }
  // Special ACE 2 3 4 5 case
  if (hand[4].get_rank_numeric() == 14 &&
      hand[0].get_rank_numeric() == 2 &&
      hand[1].get_rank_numeric() == 3 &&
      hand[2].get_rank_numeric() == 4 &&
      hand[3].get_rank_numeric() == 5) {
    return true;
  }
  return false;
}

bool Hand::is_three_of_a_kind() {
  if (hand[0].get_rank_numeric() ==
      hand[1].get_rank_numeric() &&
      hand[0].get_rank_numeric() ==
      hand[2].get_rank_numeric()) {
    return true;
  }
  if (hand[1].get_rank_numeric() ==
      hand[2].get_rank_numeric() &&
      hand[1].get_rank_numeric() ==
      hand[3].get_rank_numeric()) {
    return true;
  }
  if (hand[2].get_rank_numeric() ==
      hand[3].get_rank_numeric() &&
      hand[2].get_rank_numeric() ==
      hand[4].get_rank_numeric()) {
    return true;
  }
  return false;
}

bool Hand::is_two_pair() {
  if (hand[0].get_rank_numeric() ==
      hand[1].get_rank_numeric() &&
      hand[2].get_rank_numeric() ==
      hand[3].get_rank_numeric()) {
    return true;
  }
  if (hand[1].get_rank_numeric() ==
      hand[2].get_rank_numeric() &&
      hand[3].get_rank_numeric() ==
      hand[4].get_rank_numeric()) {
    return true;
  }
  
}

bool Hand::is_pair() {
  if (hand[0].get_rank_numeric() ==
      hand[1].get_rank_numeric()) {
    return true;
  }
  if (hand[1].get_rank_numeric() ==
      hand[2].get_rank_numeric()) {
    return true;
  }
  if (hand[2].get_rank_numeric() ==
      hand[3].get_rank_numeric()) {
    return true;
  }
  if (hand[3].get_rank_numeric() ==
      hand[4].get_rank_numeric()) {
    return true;
  }
  return false;
}

bool Hand::is_high_card() {
  return true;
}
