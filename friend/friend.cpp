#include <iostream>
class Robot{
public:
    Robot(int b):battery(b){}
    friend void checkBattery(const Robot&r);// friend로 지정 모든 멤버변수 접근이 가능하다.

private:
    int battery;
};

void checkBattery(const Robot&r){//개체를 const 처리해서 수정 불가능하게 한다.
    std::cout<<r.battery<<'\n';
}

int main(int argc, char const *argv[])
{
    Robot r(30);
    checkBattery(r);    
    return 0;
}
