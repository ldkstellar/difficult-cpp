#include <iostream>
#include <iomanip>

int main(int argc, char const *argv[])
{
    char firstName[4];
    std::cin>>std::setw(4)>>firstName;// 안전한 방법 null캐릭터 포함해서 4글자 가져와라 
    std::cout<<firstName;
    return 0;
}
