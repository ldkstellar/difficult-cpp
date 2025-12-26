#include "brother.h"

#include <iostream>

Brother::Brother():Money(){}
Brother::Brother(int won):Money(won){}
void Brother::showMoney() { std::cout << Money::won << std::endl; }