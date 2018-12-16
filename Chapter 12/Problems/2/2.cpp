#include <iostream>
#include <cmath>

class Shape {
public:
  Shape(int d = 0);
protected:
  int dimensions;
  static constexpr double PI = 3.14159265359;
private:
};

Shape::Shape(int d) : dimensions(d) {}

class TwoDimensional : public Shape {
public:
  TwoDimensional();
  double get_area() const;
  double get_perimeter() const;
protected:
  virtual void calculate_area() = 0;
  virtual void calculate_perimeter() = 0;
  double area, perimeter;
private:
};

TwoDimensional::TwoDimensional() : Shape(2) {}

double TwoDimensional::get_area() const {
  return area;
}

double TwoDimensional::get_perimeter() const {
  return perimeter;
}

class Triangle : public TwoDimensional {
public:
  Triangle(double b = 1, double h = 1, double s2 = 1, double s3 = 1);
  void calculate_area();
  void calculate_perimeter();
protected:
  double base, height, side2, side3;
private:
};

Triangle::Triangle(double b, double h, double s2, double s3) :
  base(b), height(h), side2(s2), side3(s3) {
  calculate_area();
  calculate_perimeter();
}

void Triangle::calculate_area() {
  area = .5 * base * height;
}

void Triangle::calculate_perimeter() {
  perimeter = base + side2 + side3;
}

class Rectangle : public TwoDimensional {
public:
  Rectangle(double l = 1, double w = 1);
protected:
  void calculate_area();
  void calculate_perimeter();
  double length, width;
private:
};

Rectangle::Rectangle(double l, double w) : length(l), width(w) {
  calculate_area();
  calculate_perimeter();
}

void Rectangle::calculate_area() {
  area = length * width;
}

void Rectangle::calculate_perimeter() {
  perimeter = (2 * length) + (2 * width);
}

class Circle : public TwoDimensional {
public:
  Circle(double r = 1);
protected:
  void calculate_area();
  void calculate_perimeter();  
  double radius;
private:
};

Circle::Circle(double r) : radius(r) {
  calculate_area();
  calculate_perimeter();
}

void Circle::calculate_area() {
  area = PI * radius * radius;
}

void Circle::calculate_perimeter() {
  perimeter = 2 * PI * radius;
}

class ThreeDimensional : public Shape {
public:
  ThreeDimensional();
  double get_volume() const;
  double get_surface_area() const;
protected:
  virtual void calculate_volume() = 0;
  virtual void calculate_surface_area() = 0;  
  double volume, surface_area;
private:
};

ThreeDimensional::ThreeDimensional() : Shape(3) {}

double ThreeDimensional::get_volume() const {
  return volume;
}

double ThreeDimensional::get_surface_area() const {
  return surface_area;
}

class Box : public ThreeDimensional {
public:
  Box(double s1 = 1, double s2 = 1, double s3 = 1);
protected:
  void calculate_volume();
  void calculate_surface_area();
  double side1, side2, side3;
private:
};

Box::Box(double s1, double s2, double s3) :
  side1(s1), side2(s2), side3(s3) {
  calculate_volume();
  calculate_surface_area();
}

void Box::calculate_volume() {
  volume = side1 * side2 * side3;
}

void Box::calculate_surface_area() {
  surface_area = (2 * side1 * side2) +
    (2 * side1 * side3) + (2 * side2 * side3);
}

class Cone : public ThreeDimensional {
public:
  Cone(double r = 1, double h = 1);
protected:
  void calculate_volume();
  void calculate_surface_area();
  double radius, height;
private:
};

Cone::Cone(double r, double h) : radius(r), height(h) {
  calculate_volume();
  calculate_surface_area();
}

void Cone::calculate_volume() {
  volume = (PI * radius * radius * height) / 3;
}

void Cone::calculate_surface_area() {
  double hyp = sqrt((height * height) + (radius * radius));
  surface_area = PI * radius * (radius + hyp);
}

class Cylinder : public ThreeDimensional {
public:
  Cylinder(double r = 1, double h = 1);
protected:
  void calculate_volume();
  void calculate_surface_area();  
  double radius, height;
private:
};

Cylinder::Cylinder(double r, double h) : radius(r), height(h) {
  calculate_volume();
  calculate_surface_area();
}

void Cylinder::calculate_volume() {
  volume = PI * radius * radius * height;
}

void Cylinder::calculate_surface_area() {
  surface_area = 2 * PI * ((radius * height) + (radius * radius));
}

class Sphere : public ThreeDimensional {
public:
  Sphere(double r = 1);
protected:
  void calculate_volume();
  void calculate_surface_area();  
  double radius;
private:
};

Sphere::Sphere(double r) : radius(r) {
  calculate_volume();
  calculate_surface_area();
}

void Sphere::calculate_volume() {
  volume = (4.0 / 3) * PI * radius * radius * radius;
}

void Sphere::calculate_surface_area() {
  surface_area = 4 * PI * radius * radius;
}

int main(int argc, char* argv[]) {
  ThreeDimensional* p = new Sphere;
  std::cout << p->get_volume() << " " << p->get_surface_area();
  return 0;
}
