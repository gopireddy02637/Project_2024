#include<iostream>
#include<thread>
#include<mutex>

using namespace std;

/* 
static funtion is not a thread sae becoz 
t1 and t2 goin same time so thats why its giving wrong results

*/
static int s=0;
mutex m;
void fun(){
    int count=100000;
    m.lock();
    while(count--){
        ++s;
    }
    m.unlock();
    cout<<s<<endl;
}
int main(){
    thread t1(fun);
    thread t2(fun);
    t1.join();
    t2.join();
    
}

