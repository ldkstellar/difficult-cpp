#include <iostream>
#include "global.h"

// 전역 변수 정의 (extern 없이)
int global_counter = 0;

void increase_counter() {
    global_counter++;
    std::cout << "Counter increased: " << global_counter << std::endl;
}