// ////////////////////////////////////////////////////////////////
//
// Function Name : RangeSumEven
// Description   : Display Addition of the Given Even range numbers
// Input         : Accept Starting and Ending Number
// Output        : Display Even Number Addition
// Author        : Davghat Puja Anil
// Date          : 04/11/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int RangeSumEven(int iStart , int iend)
{ 
    int iCurretntValue = 0, iSum =0;
    if(iStart > iend)
    {
        printf("Invalid Input.");
    } 

    for(iCurretntValue = iStart; iCurretntValue <= iend; iCurretntValue++)
  {
    if(iCurretntValue % 2 == 0)
    {
      iSum = iSum + iCurretntValue;
        printf("%d\t", iCurretntValue);
    }
  }
    printf("\n");
    return iSum;
}

int main()
{ 
    int iValue1 = 0, iValue2 =0;
    int iRet =0;
   printf("Enter Starting  Point :\n");
   scanf("%d",&iValue1);

   printf("Enter Ending   Point :\n");
   scanf("%d",&iValue2);

    iRet =  RangeSumEven(iValue1,iValue2);
   printf("Addition is :%d\n",iRet);
    return EXIT_SUCCESS;
}