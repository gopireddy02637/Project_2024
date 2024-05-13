#include<stdio.h>

int main (){
    int val=0x12345678;
    char *ptr=(char*)val;
    printf("%x/n",*ptr);
    if(*ptr==0x12)
        printf("big endian");
        else
        printf("little endian");
    return 0;
}