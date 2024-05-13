#include<stdio.h>
int add(int x, int y){
    return x+y;

}
int main(){
    int (*ptr)(int,int);
    ptr=add;
    int resuks=ptr(10,10);
    printf("results %d",resuks);
    return 0;
}