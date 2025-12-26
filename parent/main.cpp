
#include <iostream>

#include "Child.h"
#include "Father.h"

int main(int argc, char const* argv[]) {
  Child child("이동규", 28, "이영우", 54);
  child.showFather();
  return 0;
}
