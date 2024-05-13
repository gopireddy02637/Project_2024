/*
1- 5 ways to create thread  using callable object
2- we cannot guarantee which one will start fist

*/

#include<iostream>
#include<thread>
class base{
    public:
    void funtion(int x){
        int data =x;
        cout<<data<endl
    }
    static void funtion_static(int x){
        int data =x;
        cout<<data<endl
    }
};
void fun(int x){
    int data=x;
    cout<<data<<endl;
}
int main(){
    //funtion pointer way to thread 
     thread t1(fun,10);
     t1.join();
     //non- static member funtion
     base b;
     thread t2(&base::funtion,&b,20);
     t2.join();
     //static member funtion
     base b1;
     thread t3(&base::funtion_static,30);
     t3.join();
     //funtors
     //lambda funtions
    return 0;
}

