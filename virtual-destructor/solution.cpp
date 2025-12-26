#include <iostream>
class Base {
public:
  virtual ~Base() { std::cout << "Base destroyed\n"; } // 2번 해제
};

class Derived : public Base {
public:
  ~Derived() { std::cout << "Derived destroyed\n"; } // 1. 해제
};

int main(int argc, char const *argv[]) {
  Base *base = new Derived();
  delete base;
  return 0;
}
