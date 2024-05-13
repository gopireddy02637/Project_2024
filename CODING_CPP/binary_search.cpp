// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int binarysearch(int arr[],int size,int key){
    int start=0;
int end=size;
while(start<=end){
        int mid=(start+end)/2;
        
        if(arr[mid]==key){
        return mid;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return -1;
}
int main() {
int arr[]={10,20,30,40,50};
int size=sizeof(arr)/sizeof(arr[0]);
cout<<" size "<<size<<endl;
int key=30;
cout<<" index = "<<binarysearch(arr,size,key);
    return 0;
}