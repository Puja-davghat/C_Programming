// ////////////////////////////////////////////////////////////////
//
// Function Name : StrRevX
// Description   : accept string from user and reverse the string 
// Input         :  Enter String :abcde
// Output        :  Modified String is : edcba 
//                                    
// Author        :  Davghat Puja Anil
// Date          :  20/11/2026
//
// ////////////////////////////////////////////////////////////////
#include <stdio.h>
#include<string.h>
int StrRevX( char *str)
{
     int lChar = 0, rChar = strlen(str) - 1;

    // Swap characters from both ends till we reach
    // the middle of the string
    while (lChar < rChar) {
        char temp = str[lChar];
        str[lChar] = str[rChar];
        str[rChar] = temp;
        lChar++;
        rChar--;
    }
  
    return *str;
}


int main()
{
char arr[20];

printf("Enter the Stering: \n");
scanf("%[^'\n']s",arr);

StrRevX(arr);

printf("Modified String is :\n%s", arr);

    return 0;

}