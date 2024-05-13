#include<stdio.h>
int main(){
    int num=4;
    if(num&1)
        print("odd\n");
    else
    printf("even\n");
    
    return 0;
}
/*

test
num &(1<<n)

 0001 1100      0001 1100
 0010 0000      0001 0000
                0001 0000
 ----------
 0000 0000         

clear
num =num &~(1<<n)

set
num=num |(1<<n)

0000 0101
0000 1000
0000 1101


toggle
num=num^(1<<n)
*/