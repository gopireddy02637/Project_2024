#include<stdio.h>

int main(){
    int arr[10]={10,20,30,40};//*arr[0]=*(100+0)=*a(100+0*sizeof int)=*(100)=10;
    int *ptr=arr;//ptr=*(ptr+0)=*(100+0)
    return 0;
}