#include<stdio.h>
#include<stdlib.h>

int RangeDisplayEven(int iStart , int iend)
{ int iCurretntValue = 0;

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