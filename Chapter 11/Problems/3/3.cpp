#include <iostream>

class Ratio {
  friend std::ostream& operator<<(std::ostream& os, const Ratio& r);
  friend Ratio operator+(const Ratio& r1, const Ratio& r2);
  friend Ratio operator/(const Ratio& r1, const Ratio& r2);
public:
  Ratio(int num_ = 0, int den_ = 1) : num(num_), den(den_) {}
  Ratio(const Ratio& r) : num(r.num), den(r.den) {}
private:
  int num, den;
};

std::ostream& operator<<(std::ostream& os, const Ratio& r) {
  os << r.num << "/" << r.den;
  return os;
}

Ratio operator+(const Ratio& r1, const Ratio& r2) {
  int new_den = r1.den * r2.den;
  int new_num1 = r1.num * r2.den;
  int new_num2 = r2.num * r1.den;
  Ratio sum(new_num1 + new_num2, new_den);
  return sum;
}

Ratio operator/(const Ratio& r1, const Ratio& r2) {
  Ratio quotient(r1.num * r2.den, r1.den * r2.num);
  return quotient;
}

int main(int argc, char* argv[]) {
  Ratio r1(10, 4);
  Ratio r2(3, 5);
  std::cout << r1 + r2 << std::endl;
  std::cout << r1 / r2 << std::endl;
  
  return 0;
}
