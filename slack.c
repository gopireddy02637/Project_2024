#include<stdio.h>
#pragma pack(1)
struct test {
    char a;
    int b;
};
int main(){
    printf("struct size %lu",sizeof(struct test));
    return 0;
}