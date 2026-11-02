////////////////////////////////////////////////////////////////
//
// Function Name : SquareMeter
// Description   : Convert SquareFeet to SquareMeter
// Input         : Enter Area in Square Feet: 5
// Output        : Area in SquareMeter : 0.464500
// Author        : Puja Anil Davghat
// Date          : 2/11/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>

double SquareMeter(int iValue)
{
   double dSMeter = 0.0;
   
   dSMeter = iValue * 0.0929;

   return dSMeter;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter Area in Square feet :");
    scanf("%f", &fValue);

    dRet = SquareMeter(fValue);

    printf("Area in SquareMeter: %lf", dRet);

    return 0;
}