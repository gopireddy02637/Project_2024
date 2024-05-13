// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class num{
    public:
    int val;
     virtual void fun(int x)
    {
        val= x;
        cout<<val<<"base"<<endl;
    }
     virtual void fun(int x,int y){
        int z=x+y;
            cout<<z<<"base"<<endl;
    }
};
class b: public num{
    public:
    void fun(int t){
        val=t;
        cout<<val<<"derived"<<endl;
    }
     void fun(int x,int y){
        int z=x+y;
            cout<<z<<"driver"<<endl;
    }
    
};
int main() {
   num *obj1;
   b obj;
   obj1=&obj;
   obj1->fun(10);
   obj1->fun(20,31);
   

    return 0;
}