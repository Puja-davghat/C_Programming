// ////////////////////////////////////////////////////////////////
//
// Function Name : RangeSum
// Description   : Display Addition of the Given range numbers
// Input         : Accept Starting and Ending Number
// Output        : Display Addition
// Author        : Puja Anil Davghat
// Date          : 04/11/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int RangeSum(int iStart , int iend)
{ 
    int iCurretntValue = 0  , iSum;
    if(iStart > iend)
    {
        printf("Invalid Input.");
    } 

    for(iCurretntValue = iStart; iCurretntValue <= iend; iCurretntValue++)
  {
    iSum = iSum + iCurretntValue;
        printf("%d\t", iCurretntValue);
    
  }

    printf("\n");
    return iSum-1;
}

int main()
{ 
    int iValue1 = 0, iValue2 =0;
    int iRet =0;
   printf("Enter Starting  Point :\n");
   scanf("%d",&iValue1);

   printf("Enter Ending   Point :\n");
   scanf("%d", &iValue2);

    iRet =  RangeSum(iValue1,iValue2);
   printf("Addition is :%d\n",iRet);
    return EXIT_SUCCESS;
}