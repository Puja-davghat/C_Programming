#include<stdio.h>
int FactorialDiff(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
int iFactEven = 1,iFactOdd = 1, iCount =0;
 for(iCount=2; iCount<=iNo ; iCount+=2)
 {
    iFactEven = iFactEven * iCount;
 }
 for(iCount=1; iCount<=iNo ; iCount+=2)
 {
    iFactOdd = iFactOdd * iCount;
 }
 return iFactEven - iFactOdd;
}

int main()
{
    int iValue =0, iRet =0;
     printf("Enter Number : \n");
     scanf("%d",&iValue);

     iRet = FactorialDiff(iValue); 

     printf(" factorial Difference is :  %d",iRet);

    return 0;
}