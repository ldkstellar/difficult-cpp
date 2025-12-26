
#include <iostream>

#include "Father.h"
class Child : protected Father {
 public:
  Child(std::string name, int age,std::string fatherName ,int fatherAge);
  void showFather();

 private:
  std::string name;
  int age;
};
