#include<stdio.h>

int main(void){
    int arr[5]={10,30,74,35,98};
    int j,large,second;
    for(int i=0;arr[i]='\0';i++)
    printf("%d",arr[i]);

    if(arr[0]>arr[1]){
        large=arr[0];
        second=arr[1];
        }else {
        large=arr[1];
        second=arr[0];
        }
    
    for(j=2;j<5;j++){
        if(large<arr[j]){
            large=arr[j];
            second=large;
        }
        else if(second<arr[j])
            second=arr[j];

    }
    printf("%second large %d\n",second);

    return 0;
}