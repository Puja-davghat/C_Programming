///////////////////////////////////////////////////////////////
//
// Function Name : CountDiff
// Description   : It Return Diffrence Between Summation of Even digit and Summation of odd digit
// Input         : Integer
// Output        : return  difference of summation odd And Even
// Author        : Davghat puja Anil
// Date          : 04/11/2026
//
///////////////////////////////////////////////////////////////
 #include<stdio.h>
int CountDiff(int iNo)
 {
 int  EvenSum=0,OddSum =0;
 int iDigit =0;
 
 while (iNo != 0)
 {
    iDigit =iNo % 10;
    if(iDigit % 2 ==  0)
    {

 EvenSum = EvenSum + iDigit;
 
}else
{
    OddSum = OddSum + iDigit;
}
iNo=iNo /10;
 }
return EvenSum-OddSum;
 
 }

 int main()
 {
    int iValue = 0;
    int iRet = 0;
     printf("Enter Number: \n");
     scanf("%d", &iValue);

     iRet = CountDiff(iValue);

     printf("Diffrence Between Summation of Even & odd  digit : %d\n",iRet);
     return 0;
 }