#include "sister.h"

#include <iostream>
Sister::Sister() : Money(0) {}
Sister::Sister(int won) : Money(won) {}
void Sister::showMoney() { std::cout << Money::won << std::endl; }