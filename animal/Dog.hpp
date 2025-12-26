#pragma once
#include <string>

#include "Animal.hpp"

class Dog : public Animal {
 public:
  Dog(std::string name) : name(name) {};
  void bark();
  ~Dog();

 private:
  std::string name;
};
