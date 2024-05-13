// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
int arr[]={2,7,11,15};
int len=sizeof(arr)/sizeof(arr[0]);
cout<<len<<endl;
int target;
cin>>target;

for(int i=0;i<len-1;i++){
    for(int j=i+1;j<len;j++){
        if(arr[i]+arr[j]==target){
            cout<<i<<","<<j;
        }
    }
}
    return 0;
}