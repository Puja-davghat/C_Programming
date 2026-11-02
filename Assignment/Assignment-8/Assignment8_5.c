#include<stdio.h>
 void Table(int iNo)
 {
    int iResult =0 , iCount = 0;
printf("--- Table of %d ---\n", iNo);

if( iNo<0)
{
    iNo =-iNo;

}
for(int iCount = 10; iCount >= 1; iCount--)
    {
        iResult = iNo * iCount;
        printf("%d\n",iResult);
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