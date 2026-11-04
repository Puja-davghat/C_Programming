
///////////////////////////////////////////////////////////////
//
// Function Name : DisplayDigit
// Description   : acept number From user and diplay its digit in reverse order
// Input         : Integer
// Output        : digit in reverse order
// Author        : Davghat puja Anil
// Date          : 04/11/2026
//
///////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayDigit(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo !=0)
    {
        iDigit = iNo % 10;
        printf("%d\n", iDigit);
        iNo = iNo / 10;
    }


}

int main()
{
    int iValue = 0;
    printf("Enter number: ");
    scanf("%d", &iValue);
    DisplayDigit(iValue);

    return 0;
}