#include <string>
#include <iostream>

class Name {
  friend std::ostream& operator<<(std::ostream& os, const Name& n);
  friend std::istream& operator>>(std::istream& is, Name& n);
 public:
  Name(std::string l, std::string f, std::string m,
       std::string t, std::string s, std::string n) :
  last(l), first(f), middle(m), title(t), suffix(s), nick(n) {}
 Name(const Name& n) : last(n.last), first(n.first), middle(n.middle),
    title(n.title), suffix(n.suffix), nick(n.nick) {}
  void set_name(std::string l, std::string f, std::string m,
		std::string t, std::string s, std::string n);
 protected:
 private:
  std::string last, first, middle, title, suffix, nick;
};

std::ostream& operator<<(std::ostream& os, const Name& n) {
  os << "Last name: " << n.last << std::endl;
  os << "First name: " << n.first << std::endl;
  os << "Middle name:" << n.middle << std::endl;
  os << "Title: " << n.title << std::endl;
  os << "Suffix: " << n.suffix << std::endl;
  os << "Nickname: " << n.nick << std::endl;
  return os;
}

std::istream& operator>>(std::istream& is, Name& n) {
  is >> n.last >> n.first >> n.middle >>
    n.title >> n.suffix >> n.nick;
  return is;
}

void Name::set_name(std::string l, std::string f, std::string m,
	      std::string t, std::string s, std::string n) {
  last = l;
  first = f;
  middle = m;
  title = t;
  suffix = s;
  nick = n;
}
