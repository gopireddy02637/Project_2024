#include<stdio.h>
/*
int main (void){
    int num=10;
    int i=0;
    int rem;
    while(num!=0){
        rem=num%2;//  1 0 1 0
        printf("rem %d\n",rem);
        int num=num/2;
        //long long bin =bin + rem*i;
        //i= i* 10;
        
    }
    
    return 0;
}
*/

int main(){  
int a[10],n,i;     
printf("Enter the number to convert: ");    
scanf("%d",&n);    
for(i=0;n>0;i++)    
{    
a[i]=n%2;    
n=n/2;    
}    
printf("\nBinary of Given Number is=");    
for(i=i-1;i>=0;i--)    
{    
printf("%d",a[i]);    
}    
return 0;  
}  

/*
    n=10      a[0]=0  
    n=5        
    n=5       a[1]=1
    n=2
    n=2       a[2]=0
    n=1        
    n=1       a[3]=1

    a[4]=3     1
    a[3]=2     0
    a[2]=1     1
    a[0]=0    0    

*/