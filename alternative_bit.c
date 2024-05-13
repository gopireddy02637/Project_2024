// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // // Write C code here
    // printf("Hello world");
    unsigned int bit =0;
    unsigned int j,k;
    
      for (int i=0;i<32;i++){
          j=bit | 1;
          printf("%u",bit);
          printf("%u",j);
        //   printf("\n");
          k=1>>j;
          printf("%u",k);
      }     
    return 0;
}