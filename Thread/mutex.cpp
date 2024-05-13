#include<iostream>
#include<thread>
#include<mutex>

using namespace std;
mutex m;
int x;
void fun(){
    m.lock();
    ++x;
    m.unlock():
}
int main(){
    thread t1(fun);
    thread t2(fun);
    t1.join();
    t2.join();
    return 0;
}