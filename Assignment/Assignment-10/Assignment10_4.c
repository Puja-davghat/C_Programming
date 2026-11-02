// ////////////////////////////////////////////////////////////////
//
// Function Name : FhToCs
// Description   : Convert Fahrenheit to Celcius
// Input         : Enter Temperature in Fahrenheit: 10
// Output        : Temperature in Celcius is : -12.222222
// Author        : Puja Anil Davghat
// Date          : 2/11/2026
//
// ////////////////////////////////////////////////////////////////
#include<stdio.h>
float FhToCs(float fTemp)
{
    float fCelcius  = 0.0f;

   fCelcius = (fTemp - 32.0f) * (5.0f / 9.0f);

    return fCelcius;
}


int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter Tempreture in Fahrenheit: ");
    scanf("%f", &fValue);

    dRet = FhToCs(fValue);

    printf("Tempreture in Celcius: %lf", dRet);

    return 0;
}