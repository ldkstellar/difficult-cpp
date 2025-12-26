#include <iostream>

#include "Animal.hpp"
#include "Dog.hpp"
int main(int argc, char const* argv[]) {
  Dog dog("신이다");
  // dog.bark();  // 순수 가상함수를 자식 클래스에서 오버라이딩한 것이다.
  dog.bark();

  return 0;
}
