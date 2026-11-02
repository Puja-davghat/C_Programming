// ////////////////////////////////////////////////////////////////
//
// Function Name : Number
// Description   : Print the number is small, medium, long.
// Input         : Integer Number: 10
// Output        : Small / Medium / Long
// Author        : Puja Anil Davghat
// Date          : 2/11/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
 int Factorial(int iNo)
 {
int Fact = 1, iCount = 0;

 if (iNo < 0)
 {
    iNo = -iNo;

 }
    for(int  iCount = iNo; iCount >0 ; iCount--)
    {
        Fact = Fact * iCount; 
    } 
    return Fact;
 }

int main()
{
    int  iValue = 0;
    int iRet = 0;
    printf("Enter Number :\n");
    scanf("%d",&iValue);

    iRet=Factorial(iValue);
    printf("Fatorial of number is : %d\n",iRet);
    return 0;
}