///////////////////////////////////////////////////////////////
//
// Function Name : Multiply
// Description   : Accept 3 numbers and print their Multiplication
// Input         : Integer
// Output        : Print Three number Multiplication 
// Author        : Davghat puja Anil
// Date          : 04/11/2026
//
///////////////////////////////////////////////////////////////
#include<stdio.h>
int Multiply(int iNo1, int iNo2, int iNo3)
{
if(iNo1 == 0)
{
return 0;
}
if(iNo2 == 0)
{
return 0;
}
if(iNo3 == 0)
{
return 0;
}
return iNo1 * iNo2 * iNo3;
}
int main()
{
int iValue1 = 0,iValue2 = 0,iValue3 = 0,iRet = 0;
printf("Please enter three numbers");
scanf("%d %d %d",&iValue1,&iValue2,&iValue3);
iRet = Multiply(iValue1,iValue2,iValue3);
printf("%d",iRet);
return 0;
}