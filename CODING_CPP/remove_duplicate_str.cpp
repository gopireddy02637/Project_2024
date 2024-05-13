// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

char *removeduplicate(char str[],int size){
    
    int i=0;
    
    for(int j=0;j<size;j++){
        int k;
        for(k=0;k<j;k++){
            if(str[j]==str[k])
            break;
        }
        if(k==j){
            str[i++]=str[j];
        }
    }
    return str;
}
int main() {
  char str[]="somewheresometime";
  int size=sizeof(str)/sizeof(str[0]);
  
  cout<<removeduplicate(str,size);

    return 0;
}