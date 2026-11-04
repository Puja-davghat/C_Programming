////////////////////////////////////////////////////////////////
//
// Function Name : RangeDisplay
// Description   : Display Range Between Starting & ending point
// Input         : Enter Starting Point And Ending Point 10-15
// Output        : Range is : 10 11 12 13 14 15
// Author        : Puja Anil Davghat
// Date          : 4/11/2026
//
// ////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>

void RangeDisplay(int iStart, int iend)
{ 
    int iCurretntValue = 0;
if(iStart > iend)
    {
        printf("Invalid Input.");
    } 
    for(iCurretntValue = iStart+1; iCurretntValue <= iend; iCurretntValue++)
  {
    
        printf("%d\t", iCurretntValue);
    
  }

    printf("\n");
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Starting Point:\n");
    scanf("%d", &iValue1);

    printf("Enter Ending Point:\n");
    scanf("%d", &iValue2);

    printf("Range is:\n");
    RangeDisplay(iValue1, iValue2);

    return EXIT_SUCCESS;
}

