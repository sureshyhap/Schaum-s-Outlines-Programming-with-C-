#include <iostream>
#include <cstring>

class Card {
  friend std::ostream& operator<<(std::ostream& os, const Card& c);
  friend bool operator<(const Card& c1, const Card& c2);
  friend bool operator>(const Card& c1, const Card& c2);
  friend class Hand;
  friend class Deck;
public:
  Card();
  Card(char* r, char* s);
  Card(int r, int s);
  Card(const Card& c);
  ~Card();
  Card& operator=(const Card& c);
  char* operator[](int index);
  int get_rank_numeric() const;
  int get_suit_numeric() const;
private:
  void set_str(char* str, char rank_or_suit); 
  bool str_equality(const char* str, char rank_or_suit) const;
  char* rank,* suit;
};

std::ostream& operator<<(std::ostream& os, const Card& c) {
  os << c.rank << " of " << c.suit;
  return os;
}

bool operator<(const Card& c1, const Card& c2) {
  if (c1.get_rank_numeric() < c2.get_rank_numeric()) {
    return true;
  }
  else {
    return false;
  }
}

bool operator>(const Card& c1, const Card& c2) {
  if (c1.get_rank_numeric() > c2.get_rank_numeric()) {
    return true;
  }
  else {
    return false;
  }
}

Card::Card() {
  rank = NULL;
  suit = NULL;
}

Card::Card(char* r, char* s) {
  set_str(r, 'r');
  set_str(s, 's');
}

Card::Card(int r, int s) {
  switch (r) {
  case 14:
    strcpy(rank,"ACE");
    break;
  case 2:
    strcpy(rank,"TWO");
    break;
  case 3:
    strcpy(rank,"THREE");
    break;
  case 4:
    strcpy(rank,"FOUR");
    break;
  case 5:
    strcpy(rank,"FIVE");
    break;
  case 6:
    strcpy(rank,"SIX");
    break;
  case 7:
    strcpy(rank,"SEVEN");
    break;
  case 8:
    strcpy(rank,"EIGHT");
    break;
  case 9:
    strcpy(rank,"NINE");
    break;
  case 10:
    strcpy(rank,"TEN");
    break;
  case 11:
    strcpy(rank,"JACK");
    break;
  case 12:
    strcpy(rank,"QUEEN");
    break;
  case 13:
    strcpy(rank,"KING");

    break;
  }
  switch (s) {
  case 1:
    strcpy(suit,"HEARTS");
    break;
  case 2:
    strcpy(suit,"SPADES");
    break;
  case 3:
    strcpy(suit,"DIAMONDS");
    break;
  case 4:
    strcpy(suit,"CLUBS");
    break;
  }
}

Card::Card(const Card& c) {
  set_str(c.rank, 'r');
  set_str(c.suit, 's');
}

Card::~Card() {
  delete [] rank;
  delete [] suit;
}

Card& Card::operator=(const Card& c) {
  set_str(c.rank, 'r');
  set_str(c.suit, 's');
  return *this;
}

char* Card::operator[](int index) {
  if (index == 0) {
    return rank;
  }
  if (index == 1) {
    return suit;
  }
}

int Card::get_rank_numeric() const {
  if (str_equality("ACE", 'r')) {
    return 14;
  }
  else if (str_equality("TWO", 'r')) {
    return 2;
  }
  else if (str_equality("THREE", 'r')) {
    return 3;
  }
  else if (str_equality("FOUR", 'r')) {
    return 4;
  }
  else if (str_equality("FIVE", 'r')) {
    return 5;
  }
  else if (str_equality("SIX", 'r')) {
    return 6;
  }
  else if (str_equality("SEVEN", 'r')) {
    return 7;
  }
  else if (str_equality("EIGHT", 'r')) {
    return 8;
  }
  else if (str_equality("NINE", 'r')) {
    return 9;
  }
  else if (str_equality("TEN", 'r')) {
    return 10;
  }
  else if (str_equality("JACK", 'r')) {
    return 11;
  }
  else if (str_equality("QUEEN", 'r')) {
    return 12;
  }
  else if (str_equality("TWO", 'r')) {
    return 13;
  }  
}

int Card::get_suit_numeric() const {
  if (str_equality("HEARTS", 's')) {
    return 1;
  }
  else if (str_equality("SPADES", 's')) {
    return 2;
  }
  else if (str_equality("DIAMONDS", 's')) {
    return 3;
  }
  else if (str_equality("CLUBS", 's')) {
    return 4;
  }
}

void Card::set_str(char* str, char rank_or_suit) {
  int len_str = 0;
  for (int i = 0; str[i]!= '\0'; ++i) {
    ++len_str;
  }
  if (rank_or_suit == 'r') {
    rank = new char[len_str + 1];
    for (int i = 0; i < len_str; ++i) {
      rank[i] = str[i];
    }
    rank[len_str] = '\0';
  }
  else if (rank_or_suit == 's') {
    suit = new char[len_str + 1];
    for (int i = 0; i < len_str; ++i) {
      suit[i] = str[i];
    }
    suit[len_str] = '\0';
  }
}

bool Card::str_equality(const char* str, char rank_or_suit) const {
  int len_str = 0;
  for (int i = 0; str[i] != '\0'; ++i) {
    ++len_str;
  }
  if (rank_or_suit == 'r') {
    int len_r = 0;
    for (int i = 0; rank[i] != '\0'; ++i) {
      ++len_r;
    }
    if (len_r != len_str) {
      return false;
    }
    for (int i = 0; i < len_str; ++i) {
      if (rank[i] != str[i]) {
	return false;
      }
    }
    return true;
  }
  if (rank_or_suit == 's') {
    int len_s = 0;
    for (int i = 0; suit[i] != '\0'; ++i) {
      ++len_s;
    }
    if (len_s != len_str) {
      return false;
    }
    for (int i = 0; i < len_str; ++i) {
      if (suit[i] != str[i]) {
	return false;
      }
    }
    return true;
  }
}
