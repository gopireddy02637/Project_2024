#include<iostream>
#include<string>


using namespace std;

int main(){
    int arr[]={1,2,3,4,5,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<size<<endl;
    int temp;
    for(int i=0;i<size/2;++i)
    {
        temp=arr[i];
        arr[i]=arr[size-i-1];
        arr[size-i-1]=temp;
    }
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}


