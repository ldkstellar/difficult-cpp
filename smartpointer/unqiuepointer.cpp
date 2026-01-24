#include <iostream>
#include <memory>

int main(int argc, char const *argv[])
{
    const int size = 10;
    std::unique_ptr<int[]>p = std::make_unique<int[]>(10);//10짜리 0으로 초기화 된 배열
    
    for (size_t i = 0; i < size; i++)
    {
        p[i] =1;
    }
    
    for (size_t i = 0; i < size; i++)
    {
        std::cout<<p[i];
        if (i == size -1)
        {
            std::cout<<std::endl;
        }
        
    }
    
    std::unique_ptr<int[]>q = std::move(p);// 소유권이전 그러면 p 는 null
    
    if (p == NULL)
    {
        printf("소유권 이전 되었습니다\n");
    }
    
    
    return 0;
}
