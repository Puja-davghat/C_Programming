

///////////////////////////////////////////////////////////////
//
// Function Name : CountEven
// Description   : It Return Count of Odd Digit
// Input         : Integer
// Output        : return  count of Odd Digit
// Author        : Davghat puja Anil
// Date          : 04/11/2026
//
///////////////////////////////////////////////////////////////
 #include<stdio.h>
int CountOdd(int iNo)
 {
 int iCount = 0;
 int iDigit =0;
 if(iNo< 0)
 {
    iNo = -iNo;
 }
 while (iNo != 0)
 {
 iDigit =iNo % 10;
if(iDigit % 2 != 0)
{
     iCount++;
}
   iNo=iNo /10;
}
return iCount;
 
 }

 int main()
 {
    int iValue = 0;
    int iRet = 0;
     printf("Enter Number: \n");
     scanf("%d", &iValue);

     iRet = CountOdd(iValue);

     printf("count of Odd Digit :%d\n",iRet);
     return 0;
 }