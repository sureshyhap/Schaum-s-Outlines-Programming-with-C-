#include "Name.h"
#include "Date.h" 
#include <string>
#include <iostream>

class Person {
  friend std::ostream& operator<<(std::ostream& os, const Person& p);
 public:
  Person(Name n, std::string nation, 
	 Date db, Date dd, bool s) : name(n), nationality(nation),
				     dob(db), dod(dd), sex(s) {}
  void print_name() const;
  void print_nationality() const;
  void print_dob() const;
  void print_dod() const;
  void print_sex() const;
 protected:
  Name name;
  std::string nationality;
  Date dob, dod;
  bool sex;
 private:
};

std::ostream& operator<<(std::ostream& os, const Person& p) {
  p.print_name();
  std::cout << std::endl;
  p.print_nationality();
  std::cout << std::endl;
  p.print_dob();
  std::cout << std::endl;
  p.print_dod();
  std::cout << std::endl;
  p.print_sex();
  std::cout << std::endl;
}

void Person::print_name() const {
  std::cout << "Name: \n" << name;
}

void Person::print_nationality() const {
  std::cout << "Nationality: " << nationality;
}

void Person::print_dob() const {
  std::cout << "Date of Birth: " << dob;
}

void Person::print_dod() const {
  std::cout << "Date of Death: " << dod;
}

void Person::print_sex() const {
  std::cout << "Sex: " << (sex ? "male" : "female");
}
