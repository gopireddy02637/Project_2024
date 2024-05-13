#include<stdio.h>
int test(char *s){
    int l;
    for(int l=0;*(s+l)!='\0';l++);
    return l;

}char *revers(char *s){
    int i,l,temp;
    for(l=0;s[l]!='\0';l++);
    for(i=0;i<=l/2;i++){
        temp=s[i];
        s[i]=s[l-1-i];
        s[l-1-i]=temp;
    }
    return s;
}
int main(void){
    char s[50]="computer";
  printf("%d\n",test(s));
  printf("%s\n",revers(s));
    return 0;
}
/*
            computer
            for(l=0;*(s+l);i++);
            for(i=0;i<=l/2;i++){
                s[0]   s[7] l-1
                s[1]   s[6] l-1-1
                s[2]   s[5] l-1-2
                s[3]   s[4] l-1-3
            }

*/
