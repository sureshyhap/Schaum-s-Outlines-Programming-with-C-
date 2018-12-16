#include <iostream>

class Date {
  friend std::ostream& operator<<(std::ostream& os, const Date& d);
  friend std::istream& operator>>(std::istream& os, Date& d);
 public:
  Date(int m = 1, int d = 1, int y = 2000) : month(m), day(d), year(y){}
  Date(const Date& d) : month(d.month), day(d.day), year(d.year) {}
  Date& operator=(const Date& d);
  void set_date(int m, int d, int y);
 protected:
 private:
  int month, day, year;
};

std::ostream& operator<<(std::ostream& os, const Date& d) {
  switch (d.month) {
  case 1:
    os << "January ";
    break;
  case 2:
    os << "February ";
    break;
  case 3:
    os << "March ";
    break;
  case 4:
    os << "April ";
    break;
  case 5:
    os << "May ";
    break;
  case 6:
    os << "June ";
    break;
  case 7:
    os << "July ";
    break;
  case 8:
    os << "August ";
    break;
  case 9:
    os << "September ";
    break;
  case 10:
    os << "October ";
    break;
  case 11:
    os << "November ";
    break;
  case 12:
    os << "December ";
    break;
  }
  os << d.day << ", " << d.year;
  return os;
}

std::istream& operator>>(std::istream& is, Date& d) {
  is >> d.month >> d.day >> d.year;
  return is;
}

Date& Date::operator=(const Date& d) {
  month = d.month;
  day = d.day;
  year = d.year;
  return *this;
}

void Date::set_date(int m, int d, int y) {
  month = m;
  day = d;
  year = y;
}
