#include<stdio.h>

int main(void){

    char s[20]="mahesh";
    int i;
    //size_t len= s;
    for (i=0;s[i]!='\0';i++);
    printf("size of the length %d\n",i);

    return 0;
}