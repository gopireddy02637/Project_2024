#include<stdio.h>
int main(void){
    int s[5]={10,20,30,40,50};
    int i;
    for(i=0;i<=5;i++)
    printf("%d\n",s[i]);

    for(i=5;i>=0;i--)
    printf("%d\n",s[i]);
    
    return 0;
}