#include <iostream>

template<typename T>
class Box
{    /* data */
public:
    T value;
    T print(T temp){

        return temp;
    }
};

int main(int argc, char const *argv[])
{
    Box<int>box;
    box.value =1;
    box.print(3);
    Box<std::string>myBox;
    myBox.value = "나의 박카스";
    myBox.print("hello");
    return 0;
}
