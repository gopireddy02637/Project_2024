#include<iostream>
#include<thread>
using namespace std;

/* 
if thread is not declared main itself a one thread
in side we can create another thread in this cpp we can learn
- thread is also lightwight prosess
-idea is achieeve parallelism by dividing a process into multiple thread

ways to use thread
funtion pointer
lambda funtion
functors
member funtion
static member function

Join Notes
once a thread we wait for the this thread to finsh by calling join() funtion on thread
double join will termination
with help of joinable we can check is thred is joinable or not befor join() call this funtion 

detach Notes
this will detached the newly created thread
*/

//ways to thread 
//function pointer
void fun(int x){
}
int main(){

    thread t1(fun,10);
    t1.join();
    return 0;
}

//lambda expersion
int main(){
    //we can directly we can inject lambda at thread creation time;
    int fun = [](int x){
        int y+x;
    };
    thread t1(fun,10);
    t1.join();
    return 0;
}
//non static member funtion
class base{
    public:
    void fun(int x){
        
    }
}
int main(){
    base b;
    thread t1(&base::fun,&b,10);
    
    returnn 0;
}
//member funtion with thread
class base{
    public:
    void fun(int x){
        
    }
}
int main(){
    base b;
    thread t1(&base::fun,10);
    
    returnn 0;
}
