// #include<iostream>
// using namespace std;
// template <class T>
// void fun(T x){
//     static int var=10;
//     cout<<++var<<endl;
    
// }
// int main(){
//     fun(1);
//     fun('x');
//     fun(1.5);
// }
#include<iostream>
using namespace std;
class base{
    public:
    static T var;
   void pvt(){ cout<<++var<<endl;}
};
template<class T>
T base<T>::var=0;
int main(){
    base<int> b;
    b.pvt();
    
    base<float> p;
    p.pvt();
    
    return 0;
}
