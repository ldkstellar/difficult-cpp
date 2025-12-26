#pragma once
//헤더 여러번 포함 방지하는용도
class Animal {
 public:
  virtual void bark() = 0;  // 순수 가상 함수 → 추상클래스가 되는 요건이다. 추상 클래스는 자식클래스에서 오버라이딩되어야 한다.
  virtual ~Animal() {}      // 가상 소멸자 (중요)
};