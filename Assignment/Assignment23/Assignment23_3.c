// ////////////////////////////////////////////////////////////////
//
// Function Name : StrtoggleX
// Description   : accept string from user and convert it into Upper case to lower and lower to upper.
// Input         :  Enter String :    Marvellouse Multi system
// Output        :  Modified String is :  mARVELLOUSE mULTISYSTEM
// Author        :  Davghat Puja Anil
// Date          :  19/11/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>

void StrtoggleX( char *str)
{
  while (*str != '\0')
{
if((*str >= 'a') &&  (*str<='z'))
{
   *str = *str - 32;
}
else if((*str >= 'A') &&  (*str<='Z'))
{
  *str = *str + 32;   
}
str++;
}
}

 int main()
{
char arr[20];
    printf("Enter String :\n");
    scanf("%[^\n']s",arr);

    StrtoggleX(arr);

    printf("Modified String is : %s\n", arr);

    return 0;
}
