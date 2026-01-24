#include <iostream>
#include <thread>
#include <mutex>
#include <string>




void printMessage(const std::string& message){
    std::mutex mutex;
    mutex.lock();//2번스레드는 여기서 기다리고있다
    std::cout<<message<<std::endl;
    mutex.unlock();//1번이 풀리면 2번은 이제 콘솔을 사용가능하다
}

int main(int argc, char const *argv[])
{
    std::thread thread(printMessage,"thread1 is clear");
    std::thread thread2(printMessage,"thread2 is clear");
    thread.join();
    thread2.join();
    return 0;
}
