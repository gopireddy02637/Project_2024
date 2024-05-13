#include<stdio.h>
int main(void){
    const  int num=10;
    int *ptr=(int *)&num;
    printf("init=%d\n",*ptr);
    *ptr=100;
    
    printf("modify=%d\n",*ptr);

    return 0;
}