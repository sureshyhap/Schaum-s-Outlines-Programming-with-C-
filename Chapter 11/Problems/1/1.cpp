#include <iostream>

class Ratio {
  friend Ratio operator-(const Ratio& r1, const Ratio& r2);
  friend Ratio operator-(const Ratio& r);
  friend std::ostream& operator<<(std::ostream& os, const Ratio& r);
  friend bool operator<(const Ratio& r1, const Ratio& r2);
public:
  Ratio(int num_ = 0, int den_ = 1) : num(num_), den(den_) {}
  Ratio(const Ratio& r) : num(r.num), den(r.den) {}
private:
  int num, den;
};

Ratio operator-(const Ratio& r1, const Ratio& r2) {
  int new_den = r1.den * r2.den;
  int num_1 = r1.num * r2.den;
  int num_2 = r2.num * r1.den;
  Ratio difference(num_1 - num_2, new_den);
  return difference;
}

Ratio operator-(const Ratio& r) {
  Ratio neg(r);
  neg.num *= -1;
  return neg;
}

std::ostream& operator<<(std::ostream& os, const Ratio& r) {
  os << r.num << "/" << r.den;
  return os;
}

bool operator<(const Ratio& r1, const Ratio& r2) {
  int new_den = r1.den * r2.den;
  int num_1 = r1.num * r2.den;
  int num_2 = r2.num * r1.den;
  return (num_1 < num_2 ? true : false);
}

int main(int argc, char* argv[]) {
  Ratio x(22, 7);
  Ratio y(3, 14);
  Ratio z = -x - y;
  std::cout << z << std::endl;
  std::cout << (x < y) << std::endl;
  
  return 0;
}
