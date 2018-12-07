#include <iostream>
#include <cmath>

class Point {
  friend std::ostream& operator<<(std::ostream& os, const Point& p);
  friend bool operator==(const Point& p1, const Point& p2);
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

bool operator==(const Point& p1, const Point& p2) {
  if (p1.x == p2.x && p1.y == p2.y && p1.z == p2.z) {
    return true;
  }
  else {
    return false;
  }
}

std::ostream& operator<<(std::ostream& os, const Point& p) {
  os << "(" << p.x << ", " << p.y << ", " << p.z << ")";
  return os;
}

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
  Point p(1, 2, 3);
  Point p2;
  p2 = p;
  std::cout << p << std::endl;
  std::cout << p2 << std::endl;
  std::cout << (p == p2) << std::endl;
  Point p3(2, 3, 4);
  std::cout << (p == p3) << std::endl;
  
  return 0;
}
