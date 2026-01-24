#include "a.h"
#include "b.h"
#include <iostream>
int main(int argc, char const *argv[]) {
  std::cout << "initial counter: " << counter << std::endl;
  increase();
  increase();
  increase();
  printCounter();
  return 0;
} // 결론은 모듈간 연결을 용아하기 위해서 사용한다.
