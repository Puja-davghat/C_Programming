/*
////////////////////////////////////////////////////////////
//
// Function Name : CheckLeapYear
// Description   : It is used to check whether a year is a leap year
// Input         : Integer
// Output        : Void
// Author        : Puja Anil Davghat
// Date          : 22/10/2026
//
////////////////////////////////////////////////////////////
*/

#include <stdio.h>
#include <stdlib.h>

void CheckLeapYear(int iYear)
{
    if(iYear<= 0)
    {
        printf("Invalid Year");
    }else if (iYear % 400 == 0)
    {
        printf("Leap Year");
    }
    else if (iYear % 4 ==0 && iYear % 100 != 0)
    {
         printf("Leap Year");
    }
    else{
         printf("Not a Leap  Year");
    }
}

int main()
{
    int iYear = 0;

    printf("Enter year: ");
    scanf("%d", &iYear);

    CheckLeapYear(iYear);

    return EXIT_SUCCESS;
}
