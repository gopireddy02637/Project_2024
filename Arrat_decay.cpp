// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void displayvalue(int (*p)[10]){
    cout<<"size of new arr "<< sizeof(p);
    
}
void displayvalue_1(int (&p)[10]){
    cout<<"size of new arr "<< sizeof(p);
    
}
void displayvalue_2(int *p){
    cout<<"size of new arr "<< sizeof(p);
    
}

int main() {
    int arr[10]={1,2,};
    cout<<sizeof(arr);
    displayvalue(&arr);
    displayvalue_1(arr);
    displayvalue_2(arr);
    return 0;
    
/* array decay works on passing by reference not by pointer and not by value
*/
}