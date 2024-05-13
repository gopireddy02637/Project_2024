#include<iostream>
#include<thread>
#include<chrono>
#include<algorithm>
using namespace std;
using namespace std::chrono;

void fun_one(){
    cout<<"funtion one printing"<<endl;
}
void fun_two(){
    cout<<"funtion  two printing"<<endl;
}
int main(){

    auto starttime=high_resolution_clock::now();
    thread t1(fun_one);
    thread t2(fun_two);
    t1.join();
    t2.join();
//  fun_one();
//  fun_two();
    auto stoptime=high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stoptime-starttime);

    cout<<duration.count()/100<<endl;
 
 return 0;

}
