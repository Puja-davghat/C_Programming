#include<stdio.h>
#include<stdlib.h>

int RangeDisplayEven(int iStart , int iend)
{
int iCurretntValue =0;
  if((iCurretntValue>= iStart) && (iCurretntValue<=iend))
  {
printf("%d\t");
  }

return iCurretntValue++;
}

int main()
{ 
    int iValue1 = 0, iValue2 =0;
   printf("Enter Starting  Point :\n");
   scanf("%d",iValue1);

   printf("Enter Ending   Point :\n");
   scanf("%d",iValue2);

   RangeDisplayEven(iValue1,iValue2);
    return EXIT_SUCCESS;
}