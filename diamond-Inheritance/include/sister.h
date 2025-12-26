#pragma once
#include "money.h"
class Sister : virtual protected Money {
 public:
  Sister();
  Sister(int);
  void showMoney();
};
