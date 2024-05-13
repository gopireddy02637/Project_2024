// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class stud{
  int x,y;
  public:
  int set(int a,int b){
      x=a;
      y=b;
  }
  void get(){
      cout<<x;
      cout<<y;
  }
};
int main() {
    stud *ptr= new stud;
    ptr->set(9,10);
    ptr->get();
    cout << "Hello world!";
    return 0;
}