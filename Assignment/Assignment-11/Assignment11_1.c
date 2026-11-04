
#include <stdio.h>
#include <stdlib.h>

void RangeDisplay(int iStart, int iend)
{
    int iCurretntValue = 0;

    for (iCurretntValue = iStart;
         iCurretntValue <= iend;
         iCurretntValue++)
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

