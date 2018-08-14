#include <iostream>
#include <cstdlib>
#include <ctime>

class Random {
public:
  Random(int range = 0) : range(range) {seed = time(NULL);}
  void generate();
  int get() const;
  void show() const;
private:
  int range;
  int rand_num;
  unsigned int seed;
};

void Random::generate() {
  srand(seed);
  rand_num = rand() % range;
  ++seed;
}

int Random::get() const {
  return rand_num;
}

void Random::show() const {
  std::cout << rand_num << std::endl;
}

int main(int argc, char* argv[]) {
  Random r1(10);
  r1.generate();
  r1.show();

  r1.generate();
  r1.show();

  r1.generate();
  r1.show();

  return 0;
}
