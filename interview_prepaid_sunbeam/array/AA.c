#include<stdio.h>

int main(void){

    int a[10]={4,5,6,7};
    int*p=(a+10);
    printf("%d\n",*a+10);
    return 0;
}