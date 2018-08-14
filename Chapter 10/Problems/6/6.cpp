#include <iostream>
#include <cstring>

class String {
public:
  String(char* str_ = NULL) : len(strlen(str_)) {
    assign(str_);
  }
  String(const String& str_obj) : len(str_obj.len) {
    assign(str_obj.str);
  }
  ~String() {
    delete [] str;
  }
  char* get_str() const {
    return str;
  }
  int get_len() const {
    return len;
  }
  void print() const {
    std::cout << str << std::endl;
  }
  char subscript(int i) {
    if (i < 0 || i > len) {
      return '\0';
    }
    return str[i];
  }
private:
  void assign(char* s) {
    str = new char[len + 1];
    for (int i = 0; i < len + 1; ++i) {
      str[i] = s[i];
    }
  }
  char* str;
  int len;
};

int main(int argc, char* argv[]) {
  String s("Hello World");
  String s2(s);
  s.print();
  s2.print();
  std:: cout << s.subscript(1);
  
  return 0;
}
