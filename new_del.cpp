// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    
    // Write C++ code here
    int *ptr = new int(40);
    cout<<*ptr<<endl<<ptr<<endl;
    int *arr = new int[3];
    arr[0]=10;
    arr[1]=20;
    arr[2]=30;
    delete arr;
    cout<<arr[0]<<endl<<arr[2]<<endl;
    cout << "Hello world!";

    return 0;
}