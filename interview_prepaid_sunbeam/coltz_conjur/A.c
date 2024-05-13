#include<stdio.h>

int main(){
    int i;
    int num=5;
    while(num!=1){
        if(num %2 !=0){//num&1
            num=num*3+1;//num=(num<<1) + num+ 1 
        }
        else{
           
            num=num/2;//num>>1
        }
    }
    printf("col after is %d\n",num);

    return 0;
}
/*

num = odd
num*3+1
numb even
num/2
*/ 