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

*/

// find the sum of all the element from 1 to 100
int num;
void odd()
{
    for(num=1;num<=100;num++)
    {
        if((num&1)==1)
            num++;
        cout<<num<<"  ";
    }
}
void even()
{
    for(num=1;num<=100;num++)
    {
        if((num&1)==0)
            num++;
        cout<<num<<" ";
    }
}
int main(){
    thread t1(even);
    thread t2(odd);
    
    t1.join();
    cout<<endl;
    t2.join();
    
    return 0;
}