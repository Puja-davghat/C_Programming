#include<stdio.h>
 void Table(int iNo)
 {
    int iResult =0 , iCount = 0;
printf("--- Table of %d ---\n", iNo);

if( iNo<0)
{
    iNo =-iNo;

}
for(int  iCount =1; iCount <=10 ; iCount++)
    {
        iResult = iCount * iNo;
       printf("%d\n", iResult); 
    } 
   
 }

 

int main()
{
    int iValue = 0;
     printf("Enter Number: \n");
     scanf("%d",&iValue);
Table(iValue);
    return 0;
}