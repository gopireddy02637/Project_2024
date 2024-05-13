#include<stdio.h>
int fab(int a, int b){
    int c;
    printf(" %d",a);
    printf(" %d",b);

    for(int i=0;i<=5;i++){
        //printf(" %d",*a);
    c=a+b;
      printf(" %d",c);
    a=b;
    b=c;
    }
    return 0;
}
int main(void){
    int a=0,b=1;
    int (*fub) (int,int)=fab;
    fub(a,b);
    
    return 0;
}