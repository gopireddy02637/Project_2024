#include<iostream>
using namespace std;

template <class T>T fun(T x){
    int y=2;
   T results=x+y;
    cout<<results<<endl;
    
}
int main(){
    fun(2.5);
    return 0;
}