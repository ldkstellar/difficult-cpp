#include <iostream>

int main(int argc, char const *argv[])
{
    std::string str;
    std::cin>>str;
    std::cin.ignore(10,'\n');//그전에 newline을 만나면 멈춤
    std::cout<<str;
    return 0;
}
