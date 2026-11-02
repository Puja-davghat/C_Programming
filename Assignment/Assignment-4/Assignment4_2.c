/*
////////////////////////////////////////////////////////////
//
// Function Name : CheckEvenOdd
// Description   : It is used to check whether a number is even or odd
// Input         : Integer
// Output        : Void
// Author        : Puja Anil Davghat
// Date          : 22/10/2026
//
////////////////////////////////////////////////////////////
*/
#include <stdio.h>
#include <stdlib.h>

void CheckEvenOdd(int iValue)
{
    if(iValue %2 == 0)
    {
        printf("Number is Even\n");
    }else 
    {
          printf("Number is odd\n");
    }
 
}


int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    CheckEvenOdd(iValue);

    return EXIT_SUCCESS;
}