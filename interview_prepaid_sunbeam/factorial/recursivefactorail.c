#include<stdio.h>
int fact(int number){
    if(number==0)return 1;
    else
    return number *fact(number-1);
}
int main(){
    int res,number;
    printf("enter a number\n");
    scanf("%d",&number);
    res=fact(number);
    return 0;
}