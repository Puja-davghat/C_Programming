///////////////////////////////////////////////////////////////
//
// Function Name : MultFact
// Description   : It Return Multiplication of factor
// Input         : Integer
// Output        : return  Multiplication of factor
// Author        : Davghat puja Anil
// Date          : 04/11/2026
//
///////////////////////////////////////////////////////////////
#include<stdio.h>
int MultFact(int iNo)
{
int iCnt =0, iMul = 1;
for(iCnt= 1; iCnt<=iNo; iCnt++)
{
    if(iNo % iCnt == 0)
    {
        iMul =iMul * iCnt;
    }
}
return iMul;
}
int main()
{
int iValue = 0;
int iRet = 0;
printf("Enter number");
scanf("%d",&iValue);
iRet = MultFact(iValue);
printf("%d",iRet);
return 0;
}