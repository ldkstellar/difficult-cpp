#include <memory>
#include <iostream>

int main(int argc, char const *argv[])
{
    std::shared_ptr<int>a = std::make_shared<int>(4);// 공동소유권
    std::shared_ptr<int>b = a;
    printf("%d%d",*a,*b);

    return 0;
}
