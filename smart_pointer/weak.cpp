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
   
   shared_ptr<foo> p(new foo(10));
   cout<<p->getx()<<endl;
   shared_ptr<foo> p1;
   p1=p;
   cout<<p1->getx()<<"object p1 called"<<endl;
    return 0;
}//it has referece counte with p1.use_count()
//threds safe control block is  /non thread safe manage object 
// last shaered ptr goes out of scope,initisilize with other shared_ptr,reset sharde_ptr
