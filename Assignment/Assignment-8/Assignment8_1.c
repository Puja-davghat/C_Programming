// ////////////////////////////////////////////////////////////////
//
// Function Name : Number
// Description   : Print the number is small, medium, long.
// Input         : Integer Number: 10
// Output        : Small / Medium / Long
// Author        : Puja Anil Davghat
// Date          : 2/11/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>
void Number(int iNo)
{
    if(iNo < 0)
{
    iNo = -iNo;
}
    if(iNo <= 50)
    { 
      printf("Number is small\n",iNo);
    }
    else if(iNo >= 50 && iNo<100)
    { 
      printf("Number is Medium\n",iNo);
    }
    else if(iNo >= 100)
    { 
      printf("Number is large\n",iNo);
    }
}

int main()
{
int iValue = 0;

printf("Enter Number :\n");
scanf("%d",&iValue);
Number(iValue);
  return 0;
}