// ////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : Print the word of Entered Single DigitNumber.
// Input         : Integer Number: 5.
// Output        : Five.
// Author        : Puja Anil Davghat
// Date          : 2/11/2026
// ////////////////////////////////////////////////////////////////

#include <stdio.h>

void Dispaly(int iNo)
{
   
    char *Arr[] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    if(iNo < 0 )
    {
        iNo= -iNo;
    }
    if (iNo > 0 && iNo <= 9)
    {
       
        printf("%s\n", Arr[iNo]);
    }
    else
    {
        printf("Invalid Input : %d\n", iNo);
    }
}

int main()
{
    int iValue = 0;
    printf("Enter Number: ");
    scanf("%d", &iValue);

    Dispaly(iValue);
    return 0;
}
