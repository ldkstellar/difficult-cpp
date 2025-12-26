#include <iostream>

int main() {
    int* ptr = nullptr;
    *ptr = 42;  // 의도적 세그멘테이션 폴트 (크래시)
    std::cout << "이 줄은 안 보입니다." << std::endl;
    return 0;
}
