#include <iostream>
#include <cmath>

class Point {
public:
  Point(int x_ = 0, int y_ = 0) : x(x_), y(y_) {}
  Point(const Point& p) : x(p.x), y(p.y) {}
  void negate();
  double norm() const;
  void print() const;
private:
  double x, y;
};

void Point::negate() {
  x *= -1;
  y *= -1;
}

double Point::norm() const {
  return sqrt(x * x + y * y);
}

void Point::print() const {
  std::cout << "(" << x << ", " << y << ")" << std::endl;
}

int main(int argc, char* aargv[]) {
  Point p(5, 4);
  std::cout << p.norm() << std::endl;
  p.print();
  
  return 0;
}
