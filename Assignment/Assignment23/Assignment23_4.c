// ////////////////////////////////////////////////////////////////
//
// Function Name : DisplayDigit
// Description   : accept string from user and convert it into Upper case. 
// Input         :  Enter String :   Puja12 Davghat2005
// Output        :  Modified String is : 122005
// Author        :  Davghat Puja Anil
// Date          :  20/11/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayDigit( char *str)
{
  while (*str != '\0')
{
if((*str >= '0') &&  (*str<='9'))
{
  printf("%c",*str); 
}
str++;
}
}

 int main()
{
char arr[20];
    printf("Enter String :\n");
    scanf("%[^\n']s",arr);

   DisplayDigit(arr);

    return 0;
}
