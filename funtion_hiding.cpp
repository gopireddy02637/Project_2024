// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class base{
  public:
  void fun(int x){
      cout<<"base";
  }
};
class derive:public base{
    public:
    using base::fun;
    void fun(char c){
        cout<<"derive";
    }
};
int main() {
    derive d;
    d.fun(1);
    //d.base::fun(1);
    d.fun('a');
    return 0;
}