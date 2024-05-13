#include<iostream>
using namespace std;
class emp{
    int x;
    public:
    emp(int y){
        x=y;
    }
    emp(emp& a1){
        x=a1.x;
        cout<<x;
    }
};
int main(){
    emp a1(20);
    emp a2(a1);
    return 0 ;
}