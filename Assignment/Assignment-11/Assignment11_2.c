// ////////////////////////////////////////////////////////////////
//
// Function Name : RangeDisplayEven
// Description   : Display Even number in between Range.
// Input         : Accept Starting and Ending Number
// Output        : Display Even number betwwen Starting and Ending Numbers
// Author        : Puja Anil Davghat
// Date          : 04/11/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int RangeDisplayEven(int iStart , int iend)
{ 
    if(iStart > iend)
    {
        printf("Invalid Input.");
    } 
    int iCurretntValue = 0;

    for(iCurretntValue = iStart+1; iCurretntValue <= iend; iCurretntValue++)
  {
    if(iCurretntValue % 2 == 0)
    {
        printf("%d\t", iCurretntValue);
    }
  }

    printf("\n");
}

int main()
{ 
    int iValue1 = 0, iValue2 =0;
   printf("Enter Starting  Point :\n");
   scanf("%d",&iValue1);

   printf("Enter Ending   Point :\n");
   scanf("%d",&iValue2);

   RangeDisplayEven(iValue1,iValue2);
    return EXIT_SUCCESS;
}