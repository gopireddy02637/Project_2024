#include<iostream>
using namespace std;

class Temp{
    int x=10;
    public:
    friend void add(Temp &obj);
    friend void sub(Temp& ,int);
};
void add(Temp &obj){
    cout<<obj.x<<endl;
}
void sub(Temp& obj,int data){
    int y=data;
    cout<<obj.x<<endl<<y;
}
int main(){
   Temp obj;
   add(obj);
   sub(obj,20);
}