#include<iostream>
using namespace std;

int main(){
 int num = 123;
 int temp,rem,sum;
 temp=num;
 while(num>0){
 rem=num%10;
 sum=(sum*10)+rem;
 num=num/10;
 }
 if(sum==temp){
     cout<<"palindrum";
 }
 else
 cout<<"not";
 
    return 0;
}
