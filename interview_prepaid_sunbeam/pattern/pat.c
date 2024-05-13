#include<stdio.h>      
int main(void)                 
{

int N,i,j,a=1;        
            

printf("Enter the N value (number of lines):");     


scanf("%d",&N);        
for(i=1;i<=N;i++) {    

        a=(i*(i+1))/2;             

for(j=1;j<i;j++) {     

            printf("%d*",a--);   

}
        printf("%d\n",a--);  
}
return 0;
}
