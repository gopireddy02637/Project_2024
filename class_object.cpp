#include<iostream>
using namespace std;

class student {
    private:
    int val;
    public:
    void Getter(int x){
        val=x;
    }
    void setter(){
        cout<<val<<endl;
    }
}
int main(){
    student object;
    object.Getter(12);
    object.setter();
    return 0
}
/*

*/