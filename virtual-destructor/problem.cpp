#include <iostream>

class Base {
public:
  ~Base() { std::cout << "Base destroyed\n"; }
};

class Derived : public Base {
public:
  ~Derived() { std::cout << "Derived destroyed\n"; }
};

int main() {
  Base *obj = new Derived();
  delete obj; // 자식 클래스의 메모리 공간은 해제 되지 않는다.
}