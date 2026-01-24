#include <iostream>
#include <thread>
#include <mutex>
#include <string>




void printMessage(const std::string& message){
    static std::mutex sMutex;

    std::scoped_lock<std::mutex> lock(sMutex);
    std::cout<<message<<std::endl;
}

int main(int argc, char const *argv[])
{
    std::thread thread(printMessage,"thread1 is clear");
    std::thread thread2(printMessage,"thread2 is clear");
    thread.join();
    thread2.join();
    return 0;
}
