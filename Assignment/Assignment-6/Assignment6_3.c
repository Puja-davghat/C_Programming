/*
////////////////////////////////////////////////////////////
//
// Function Name : CalculateDiscount
// Description   : It is used to calculate the shopping discount
// Input         : Float
// Output        : Void
// Author        : Puja Anil Davghat
// Date          : 22/10/2026
//
////////////////////////////////////////////////////////////
*/

#include <stdio.h>
#include <stdlib.h>

void CalculateDiscount(float fAmount)
{
    float fDiscount = 0.0f;
    float fFinalAmount = 0.0f;

   if(fAmount >= 5000)
   {
    fDiscount = fAmount * 20 / 100 ;
    
   }
   else if(fAmount >= 2000)
   {
    fDiscount = fAmount * 10 / 100 ;
   }
    fFinalAmount = fAmount -fDiscount;
    printf("Discount =%.2f\n", fDiscount);
    printf("Payable Amount = %.2f\n", fFinalAmount);
}


int main()
{
    float fAmount = 0.0f;

    printf("Enter purchase amount: ");
    scanf("%f", &fAmount);

    CalculateDiscount(fAmount);

    return EXIT_SUCCESS;
}