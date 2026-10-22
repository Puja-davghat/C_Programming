/*
////////////////////////////////////////////////////////////
//
// Function Name : CheckNumber
// Description   : It is used to check whether a number is positive, negative, or zero
// Input         : Integer
// Output        : Void
// Author        : Puja Anil Davghat
// Date          : 22/10/2026
//
////////////////////////////////////////////////////////////
*/#include <stdio.h>
#include <stdlib.h>

void CheckNumber(int iValue)
{
    if(iValue > 0)
    {
        printf("Number is Positive\n");
    }else if (iValue < 0)
    {
          printf("Number is Negative\n");
    }
    else
    {
          printf("Number is Zero\n");
    }

}

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    CheckNumber(iValue);

    return EXIT_SUCCESS;
}