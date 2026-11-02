/*
////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : accept number from user and print all odd number upto number
// Output        : Void
// Author        : Puja Anil Davghat
// Date          : 1/11/2026
//
////////////////////////////////////////////////////////////
*/

#include<stdio.h>

void Display(int iNo)
{
   int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt=1; iCnt<= iNo; iCnt++)
        {
        if(iCnt % 2 != 0){
           printf("%d\t", iCnt);
        }
        }
}

int main()
{
    int iValue = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
