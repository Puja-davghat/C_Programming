/*
////////////////////////////////////////////////////////////
//
// Function Name : CheckMultipleDivisibility
// Description   : It is used to check divisibility by 3 and 5
// Input         : Integer
// Output        : Void
// Author        : Puja Anil Davghat
// Date          : 22/10/2026
//
////////////////////////////////////////////////////////////
*/

#include <stdio.h>
#include <stdlib.h>

void CheckMultipleDivisibility(int iValue)
{
  if(iValue % 3 == 0 && iValue % 5 == 0)
  {
    printf("Divisible by  Both");
  }else if (iValue % 3 == 0)

  {
    printf("Divisible by 3");
  }else if (iValue % 5 == 0)
  {
    printf("Divisible by 5");
  }
  else
  {
    printf("Not Divisible by Either");
  }
  
  
}

int main(void)
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    CheckMultipleDivisibility(iValue);

    return EXIT_SUCCESS;
}