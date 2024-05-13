#include<stdio.h>

int main (void){
    int i;
    int number;
    int f=1;
    printf("enter a number \n");
    scanf("%d",&number);
    for(i=1;i<=number;i++){
    f=f*i;
    }
    printf("factorial of number is = %d\n",f);
    
    return 0;
}