#include <iostream>

class Circle {
public:
  Circle(float radius_ = 0, float x_ = 0, float y_ = 0) :
    radius(radius_), x(x_), y(y_) {}
  float get_radius() const;
  float  get_x() const;
  float get_y() const;
  float area();
  float circumference();
private:
  float radius, x, y;
  static const float PI;
};

const float Circle::PI = 3.14159265359;

float Circle::get_radius() const {
  return radius;
}

float Circle::get_x() const {
  return x;
}

float Circle::get_y() const {
  return y;
}

float Circle::area() {
  return PI * radius * radius;
}

float Circle::circumference() {
  return 2 * PI * radius;
}

int main(int argc, char* argv[]) {
  Circle c(5, 1, 1);
  std::cout << c.area() << std::endl;
  std::cout << c.circumference() << std::endl;
  
  return 0;
}
