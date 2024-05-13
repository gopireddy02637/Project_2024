#include<iostream>
using namespace std;

class S_pointer{
    int *data;
    public:
    explicit S_pointer(int *p=nullptr){
        data=p;
    }
    ~S_pointer(){
        delete data;
        cout<<"deleted";
    }
    int& operator*(){
        return *data;
    }
};
int main(){
    int *ptr=new int(10);
    S_pointer p=S_pointer(ptr);
    cout<<*p<<endl;
    return 0;
}