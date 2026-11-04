
///////////////////////////////////////////////////////////////
//
// Function Name : CountRange
// Description   : It Return Count of Digit in Between 3 & 7
// Input         : Integer
// Output        : return  Count of Digit in Between 3 & 7
// Author        : Davghat puja Anil
// Date          : 04/11/2026
//
///////////////////////////////////////////////////////////////
 #include<stdio.h>
int CountRange(int iNo)
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
if(iDigit >= 3 && iDigit <=7 )
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

     iRet = CountRange(iValue);

     printf("Count of Digit in Between 3 & 7 :%d\n",iRet);
     return 0;
 }