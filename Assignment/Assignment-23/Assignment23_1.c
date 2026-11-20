// ////////////////////////////////////////////////////////////////
//
// Function Name :  Strlwrx
// Description   :accept string from user and convert it into lower case. 
// Input         :  Enter String :  PUja_Anil_DavgHAt
// Output        :  Modified String is : puja_anil_davghat
// Author        :  Davghat Puja Anil
// Date          :  18/11/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>
void Strlwrx(char *str)
{
while (*str != '\0')
{
if((*str >= 'A') &&  (*str<='Z'))
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

    Strlwrx(arr);

    printf("Modified String is : %s\n", arr);

    return 0;
}