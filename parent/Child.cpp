#include "Child.h"
#pragma once
#include <iostream>

#include "Father.h"

Child::Child(std::string name, int age, std::string FatherName, int fatherAge)
    : name(name), age(age), Father(FatherName, fatherAge) {}

void Child::showFather() {
  std::cout << name << " " << age << std::endl;
  std::cout
      // shadowing을 방지하고 싶을 때도 사용하는 것 같다.
      << Father::name
      << Father::age
      //<< this->Father::name
      //<< this->Father::age  // 지정된 클래스멤버변수가 없기 때문에 이렇게
      // 쓴다.
      << std::endl;  // scope지정연산자
}