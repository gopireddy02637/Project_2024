// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int removeduplicate(int arr[],int size){
    
    int temp[size];
    int j=0;
    for(int i = 0;i<=size-1;i++){
        if(arr[i]!=arr[i+1]){
            temp[j++]=arr[i];
        }
    }
    temp[j++]=arr[size-1];
    
    for(int i=0;i<j;i++){
        arr[i]=temp[i];
    }
   
    return j;
}
int main() {
  int arr[]= {1,1,2,2,3,3,4,4,5,5,6,6,6};
  int size=sizeof(arr)/sizeof(arr[0]);
  
  size=removeduplicate(arr,size);
    for(int i=0;i<size-1;i++){
        cout<<arr[i];
    }
    return 0;
}