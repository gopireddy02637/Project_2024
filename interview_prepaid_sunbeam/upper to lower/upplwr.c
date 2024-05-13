#include<stdio.h>


int  main (){
    char s[40]="BgOpI*123";
    int i;
    for(i =0; s[i]!='\0';i++){
        printf("Before string %s\n",s[i]);
        if(s[i]>='A' && s[i]<='Z'){
            s[i]=s[i]+32;
        }
    }
    printf("after string %s\n",s[i]);
    return 0;
}
/*

BgOpI*123
ascii=
A=65
a=97
*=32
A=65    a=97  
B=66    b=98


*/