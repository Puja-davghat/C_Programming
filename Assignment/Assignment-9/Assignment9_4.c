// ////////////////////////////////////////////////////////////////
//
// Function Name : OddFactorial
// Description   : Print the Odd Factorial of Number
// Input         : Integer Number: 5.
// Output        : Odd Factorial of Number is: 15
// Author        : Puja Anil Davghat
// Date          : 2/11/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>
int OddFactorial(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
int iFact = 1, iCount =0;
 for(iCount=1; iCount<=iNo ; iCount+=2)
 {
    iFact = iFact * iCount;
 }
 return iFact;
}

int main()
{
    int iValue =0, iRet =0;
     printf("Enter Number : \n");
     scanf("%d",&iValue);

     iRet = OddFactorial(iValue); 

     printf("Even factorial Number is : %d",iRet);

    return 0;
}