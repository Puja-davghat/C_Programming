// ////////////////////////////////////////////////////////////////
//
// Function Name : TableRev
// Description   : Print the Table of Given Number in Reverse Order.
// Input         : Integer Number: 10.
// Output        : Reverse Table of 10.
// Author        : Puja Anil Davghat
// Date          : 2/11/2026
//
// ////////////////////////////////////////////////////////////////

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