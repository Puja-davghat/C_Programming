/*
////////////////////////////////////////////////////////////
//
// Function Name : FindGreater
// Description   : It is used to find the greater of two numbers
// Input         : Integer, Integer
// Output        : Void
// Author        : Puja Anil Davghat
// Date          : 22/10/2026
//
////////////////////////////////////////////////////////////
*/
#include <stdio.h>
#include <stdlib.h>

void FindGreater(int iFirst, int iSecond)
{
   
    if(iFirst >iSecond)
    {
        printf("%d Number is Greater\n", iFirst);
    }else if (iFirst < iSecond)
    {
         printf("%d Number is Greater\n", iSecond);
    }
    else
    {
          printf("Both Number are equal\n");
    }

}


int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter two numbers: ");
    scanf("%d %d", &iValue1, &iValue2);

    FindGreater(iValue1, iValue2);

    return EXIT_SUCCESS;
}