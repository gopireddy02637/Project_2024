#include<stdio.h>

int main(void){
    int temp;
    int arr[5]={10,50,40,30,20};
    for(int i=0;arr[i]!='\0';i++)
    printf("arr of elements=%d\n",arr[i]);

   for(int i=0;arr[i]!='\0';i++){
       for(int j=0;arr[j]!='\0';j++)
       if(arr[i]<arr[j]){
           temp=arr[i];
           arr[i]=arr[j];
           arr[j]=temp;
       }
   }
   for(int i=0;arr[i]!='\0';i++)
   printf("after sorting, %d  ",arr[i]);
   printf("2nd large value=%d\n",arr[3]);
    return 0;
}