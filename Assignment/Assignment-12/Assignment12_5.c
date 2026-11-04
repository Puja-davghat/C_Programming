///////////////////////////////////////////////////////////////
//
// Function Name : CountFour
// Description   : It Count Frequency of digit less than 6
// Input         : Integer
// Output        : return  count of digit less than 6
// Author        : Davghat puja Anil
// Date          : 04/11/2026
//
///////////////////////////////////////////////////////////////
 #include<stdio.h>
int Count(int iNo)
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
if(iDigit <=  6)
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

     iRet = Count(iValue);

     printf("Frequency of digits less than 6 :%d\n",iRet);
     return 0;
 }