#include<iostream>
#include<memory>

using namespace std;

class foo{
    int x;
    public:
    explicit foo(int x) :x(x){};
    int getx(){
        return x;
    }
    ~foo(){
        cout<<"destructor";
    }
}; 
int main(){
//   foo *p=new foo(10);
//   cout<<p->getx()<<endl;
   
   unique_ptr<foo> p(new foo(10));//it is object on stack it is not object on heap
   cout<<p->getx()<<endl;
    return 0;
}
///we cannot shared but can move,relese,get.reset etc
///