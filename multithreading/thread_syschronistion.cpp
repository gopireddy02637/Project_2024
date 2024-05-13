#include<iostream>
#include<thread>
#include<mutex>

using namespace std;

/* 
Thread or process sychronizations
1- this can acces critical sections
2- critical is one or collection of program statement which should be executed by inle one thread or process
at a time

*/
int global=0;
mutex m;
void fun(int x){
    m.lock();
    cout<<global<<endl;
    global+=x;
    cout<<global<<endl;
    m.unlock();
    cout<<global<<endl;
}
int main(){
    thread t1(fun,100);
    thread t2(fun,200);
    t1.join();
    t2.join();
    
}

