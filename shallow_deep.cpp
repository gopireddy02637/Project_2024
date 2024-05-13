#include<iostream>
using namespace std;
class num{
 int x,y,*p;
 public:
 num(){
     p=new int;
 }
 int fun(int z,int b,int c){
    x=z;
    y=b;
    *p=c;
    return 0;
 }
 num(num& s){
     x=s.x;
     y=s.y;
     p =(int*)new int;
    *p = *(s.p);
     
 }
 ~num(){
     delete p;
 }
 void dis(){
    cout<<x<<endl<<y<<endl<<*p<<endl;
 }
};
int main(){
    num obj1;
    obj1.fun(10,20,30);
    obj1.dis();
    num obj2 =obj1;
    obj2.dis();
}