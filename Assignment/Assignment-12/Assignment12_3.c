
///////////////////////////////////////////////////////////////
//
// Function Name : CountTwo
// Description   : It Count Frequency of 2
// Input         : Integer
// Output        : return  count of 2
// Author        : Davghat puja Anil
// Date          : 04/11/2026
//
///////////////////////////////////////////////////////////////
 #include<stdio.h>
int CountTwo(int iNo)
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
if(iDigit == 2)
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

     iRet = CountTwo(iValue);

     printf("Frequency of Two :%d\n",iRet);
     return 0;
 }