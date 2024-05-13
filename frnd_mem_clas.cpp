#include<iostream>
using namespace std;

class Temp{
    int x=10;
    public:
    friend void frnd::member(Temp &obj);
};
class frnd{
    public:
    void memfun(Temp& obj){
        cou<<obj.x<<"hello";
    }
}
int main(){
   Temp obj;
   frnd obj1;
   obj1.add(obj);
}