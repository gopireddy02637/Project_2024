#include<iostream>

using namespace std;

int main(){
    int num=10;
    int arr[10],i;
    for(i=0;num>0;i++){
        arr[i]=num%2;
        num=num/2;
        cout<<arr[i]<<" ";//reverse a bit
    }
    cout<<endl;
    for(i=i-1;i>=0;i--){
    cout<<arr[i]<<" ";// orginal bit.
    }
return 0;
}