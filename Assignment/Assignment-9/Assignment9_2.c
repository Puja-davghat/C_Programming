// ////////////////////////////////////////////////////////////////
//
// Function Name : DollarToINR
// Description   : Print the INR value of the given Dollar.
// Input         : Integer Number: 10.
// Output        : Value in INR is : 700
// Author        : Puja Anil Davghat
// Date          : 2/11/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>
int DollarINR(int iNo)
{
float  iRupees =0;
iRupees = iNo * 70;  
return iRupees;
}

int main()
{
int iValue = 0 , iRet = 0;
printf("Enter Number of USD : \n");
scanf("%d",&iValue);

iRet = DollarINR(iValue);
printf("Value in INR is %d", iRet);

    return 0;
}