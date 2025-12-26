#include <iostream>
#include "global.h"

int main() {
    std::cout << "Initial counter: " << global_counter << std::endl;

    increase_counter();
    increase_counter();

    // 다른 파일에서 정의된 변수/함수 사용 가능!
    std::cout << "Final counter: " << global_counter << std::endl;

    return 0;
}