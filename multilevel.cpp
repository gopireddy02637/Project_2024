#include<iostream>
using namespace std;

class base{
    int x=9;
    public:
    int mul(){
        int c=x+2;
        return c;
    }
    void fun(){
        int val =10;
        cout<<"base class"<<val<<endl;
    }
};
class driver: public base{
    public:
    void dispaly(){
        cout<<"direv class"<<mul()<<endl;
    }
};
class
int main(){
    base obj;
    driver obj1;
   // obj.fun();
    obj1.dispaly();
    obj1.fun();
    return 0;
}