#include<iostream>
#include<string>

using namespace std;

int main(){
    string name="GOPI";
    int length=name.size();
    int temp;
    cout<<length;
    for(int i=0;i<=length/2;i++){
        temp=name[i];
        name[i]=name[length-i-1];
        name[length-i-1]=temp;
    }
    cout<<name;
    return 0;
}