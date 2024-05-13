#include<stdio.h>

int main(void){
    int n=5225;

    while(n>0){
        int rem=n%2;
        int sum=sum *10 +rem;
        n=n/10;
    }
    return 0;
}