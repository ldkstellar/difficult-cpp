#pragma once
#include "money.h"
class Brother : virtual protected Money {
 public:
  Brother();
  Brother(int);
  void showMoney();
};
