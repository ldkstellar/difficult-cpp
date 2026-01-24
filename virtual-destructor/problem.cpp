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
  delete obj; //부모클래스 포인터로 자식으로 생성하면 자식 클래스의 메모리 공간은 해제 되지 않는다. 따라서 가상 소멸자를해줘야 자동으로 자식 클래스도 해제가된다.
  //생성은 부모순 해제는 자식순 
}