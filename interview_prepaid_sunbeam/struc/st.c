
#include<stdio.h>
struct id
{
    int pnr ;  //4
   char name[20];  //11
    int rollno;   //4
};
int main(void)
{
   struct id card={12340, "ame",49545};
   //card.pnr = 2105;
  // card.name[20] = "mahesh";
   //card.rollno = 49734;
   printf("pnr : %d",card.pnr);
 //printf("name : %s",card.name);
   printf("rollno : %d",card.rollno);
   printf("size of struct =%d",sizeof(struct id));
    return 0;
}