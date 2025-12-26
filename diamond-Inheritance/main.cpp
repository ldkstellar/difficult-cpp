#include <iostream>

#include "baby.h"
#include "brother.h"
#include "money.h"
#include "sister.h"
int main(int argc, char const* argv[]) {
  Baby boy;
  boy.happy();
  Brother brother(3000);
  brother.showMoney();
  Sister sister(300);
  sister.showMoney();
  return 0;
}
