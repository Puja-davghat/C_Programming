#include<stdio.h>
int OddFactorial(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
int iFact = 1, iCount =0;
 for(iCount=1; iCount<=iNo ; iCount+=2)
 {
    iFact = iFact * iCount;
 }
 return iFact;
}

int main()
{
    int iValue =0, iRet =0;
     printf("Enter Number : \n");
     scanf("%d",&iValue);

     iRet = OddFactorial(iValue); 

     printf("Even factorial Number is : %d",iRet);

    return 0;
}