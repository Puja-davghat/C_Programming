// ////////////////////////////////////////////////////////////////
//
// Function Name : DollarToINR
// Description   : Convert the KM to Meter
// Input         : Enter Distance: 10
// Output        : Distance in Meter is : 10000
// Author        : Sanskar Balasaheb Dumbre
// Author        : Puja Anil Davghat
// Date          : 2/11/2026
//
// ////////////////////////////////////////////////////////////////
#include<stdio.h>
int KMToMeter(int iNo)
{
    if(iNo<0)
    {
      iNo = -iNo;
    }
    int iMeter= iNo * 1000;
    return iMeter;

}
int main()
{

    int iValue = 0;
    int iRet =0;
    printf("Enter Distance :");
    scanf("%d",&iValue);
    iRet = KMToMeter(iValue);
printf("Distance is :%d\n",iRet);
    return 0;

}