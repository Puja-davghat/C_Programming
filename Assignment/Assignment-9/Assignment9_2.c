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