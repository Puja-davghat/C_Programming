
///////////////////////////////////////////////////////////////
//
// Function Name : MultDigit
// Description   : It Return Multiplication of all Digits
// Input         : Integer
// Output        : return  Return Multiplication of all Digits
// Author        : Davghat puja Anil
// Date          : 04/11/2026
//
///////////////////////////////////////////////////////////////
 #include<stdio.h>
int MultDigit(int iNo)
 {
 int iCount = 0;
 int iDigit =0;
 long long Product = 1;
 if(iNo< 0)
 {
    iNo = -iNo;
 }
 while (iNo != 0)
 {
    iDigit =iNo % 10;
    if(iDigit != 0){

 Product  =  Product * iDigit;
 
}
iNo=iNo /10;
 }
return Product;
 
 }

 int main()
 {
    int iValue = 0;
    int iRet = 0;
     printf("Enter Number: \n");
     scanf("%d", &iValue);

     iRet = MultDigit(iValue);

     printf("Multiplication of all Digits :%d\n",iRet);
     return 0;
 }