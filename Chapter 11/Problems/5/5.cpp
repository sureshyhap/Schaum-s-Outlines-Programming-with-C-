#include <iostream>
#include <cmath>

class Point {
public:
  Point(int first = 0, int second = 0, int third = 0) :
    x(first), y(second), z(third) {}
  Point(const Point& p) : x(p.x), y(p.y), z(p.z) {}
  Point& operator=(const Point& p);
  void negate();
  double norm();
  void print();
private:
  double x, y, z;
};

Point& Point::operator=(const Point& p) {
  x = p.x;
  y = p.y;
  z = p.z;
  return *this;
}

void Point::negate() {
  x = -1 * x;
  y = -1 * y;
  z = -1 * z;
}

double Point::norm() {
  return sqrt(x*x + y*y + z*z);
}

void Point::print() {
  std::cout << "x = " << x << std::endl;
  std::cout << "y = " << y << std::endl;
  std::cout << "z = " << z << std::endl;
}

int main(int argc, char* argv[]) {
  
  
  return 0;
}
