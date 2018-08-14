#include <iostream>
#include <string>

class Person {
public:
  Person(int length = 20, std::string name = "", int y_o_b = earliest, int y_o_d = latest) : length(length), name(name), y_o_b(y_o_b), y_o_d(y_o_d) {}
  //  ~Person() {delete [] name;}
  const std::string& get_name() const;
  int get_y_o_b() const;
  int get_y_o_d() const;
  void print() const;
private:
  static const int earliest = 1900;
  static const int latest = 2100;
  int length;
  std::string name;
  int y_o_b;
  int y_o_d;
};

const std::string& Person::get_name() const {
  return name;
}

int Person::get_y_o_b() const {
  return y_o_b;
}

int Person::get_y_o_d() const {
  return y_o_d;
}

void Person::print() const {
  std::cout << name;
  if (y_o_b > earliest) {
    std::cout << " was born in " << y_o_b;
  }
  if (y_o_d < latest) {
    std::cout << " and died in " << y_o_d;
  }
}

int main(int argc, char* argv[]) {
  Person krabs(20, "Eugene Krabs", 1970);
  krabs.print();
  
  return 0;
}
