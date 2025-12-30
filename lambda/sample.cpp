/*
캡처 종류
[] 캡처 안함
 = 값에 의한 캡처 수정x
 & 참조에 의한 캡처
 변수이름 특정 변수의 값으로 캡처 수정x
 &변수이름 특정 변수의 참조로 캡처

*/
#include <iostream>
int main(int argc, char const *argv[])
{
 auto lambda = [](){
        std::cout<<"Im lambda function"<<std::endl;
    };
    lambda();

    []{// 바로실행
        std::cout<<"Im lambda function2"<<std::endl;
    }();

    return 0;
}
