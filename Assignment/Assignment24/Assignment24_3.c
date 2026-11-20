// ////////////////////////////////////////////////////////////////
//
// Function Name : ChkChar
// Description   : accept string from user and accept one character and return the frequency of character 
// Input         :  Enter String :   Puja Anil Davghat
// Output        :  Enter Character : a
//                                     Character of frequency is :3
// Author        :  Davghat Puja Anil
// Date          :  20/11/2026
//
// ////////////////////////////////////////////////////////////////
#include <stdio.h>
int FirstChar(char *str, char ch)
{
int iCount =0;
    while (*str != '\0')
    {
        if (*str == 'a')
        {
           iCount++;
        }
        str++;
    }
    return iCount;
}

int main()
{
    char arr[20];
    char cValue = '\0';
  int iRet = 0;

    printf("Enter String :\n");
    scanf("%[^\n]s", arr);

    printf("Enter Character :\n");
    scanf(" %c", &cValue);

    iRet = CountChar(arr, cValue);

   
        printf("Character of frequency is :%d\n",iRet);

    return 0;
}
