// ////////////////////////////////////////////////////////////////
//
// Function Name : Struprx
// Description   :accept string from user and convert it into Upper case. 
// Input         :  Enter String :    marvellous multi os
// Output        :  Modified String is : MARVELLOUS MULTI OS
// Author        :  Davghat Puja Anil
// Date          :  18/11/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>
void Struprx(char *str)
{
while (*str != '\0')
{
if((*str >= 'a') &&  (*str<='z'))
{
   *str = *str - 32;
}
str++;
}

}


int main()
{
 char arr[20];
    printf("Enter String :\n");
    scanf("%[^\n']s",arr);

    Struprx(arr);

    printf("Modified String is : %s\n", arr);

    return 0;
}