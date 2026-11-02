// ////////////////////////////////////////////////////////////////
//
// Function Name : RectArea
// Description   : Find the Area of the Rectangle
// Input         : Float Width and Height: 5.3  9.78
// Output        : Area of Rectangle: 51.834
// Author        : Puja Anil Davghat
// Date          : 2/11/2026
// ////////////////////////////////////////////////////////////////

#include<stdio.h>
 
double RectArea(float fWidth, float fHeight)
{
 float fArea = fWidth * fHeight;
 return fArea;
}

int main()
 {
    float fValue1 = 0.0f, fValue2 = 0.0f;

    float dRet = 0.0f;

    printf("Enter width: ");
    scanf("%f", &fValue1);

      printf("Enter height: ");
    scanf("%f", &fValue2);
    dRet = RectArea(fValue1,fValue2);

    printf("Area of rectangle : %lf", dRet);


    return 0 ;

 }