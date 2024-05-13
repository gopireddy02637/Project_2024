#include<iostream>

using namespace std;

int main(){ 
    int num=15;
    int arr[10],i,count=0;
    for(i=0;num>0;i++){
        arr[i]=num%2;
        num=num/2;
        }
        for(i=i-1;i>=0;i--){   
         cout<<arr[i]<<"";
         //cout<<endl;
         if(arr[i]==1){
             count++;
         }
         
        }
    cout<<endl<<count;


    return 0;
}