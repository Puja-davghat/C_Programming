// ////////////////////////////////////////////////////////////////
//
// Function Name : FirstChar
// Description   : accept string from user and accept one character and return the Location of character 
// Input         :  Enter String :   Puja Anil Davghat
// Output        :  Enter Character :  v
//                                    the Location of character is :12
// Author        :  Davghat Puja Anil
// Date          :  20/11/2026
//
// ////////////////////////////////////////////////////////////////
#include <stdio.h>
int LastChar(char *str, char ch)
{
int iCount =0;
    while (str[iCount] != '\0')
    {
        if (str[iCount] == ch)
        {
            return iCount;
        }
             iCount++;       

    }
    return -1;
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

    iRet = LastChar(arr, cValue);

   
        printf(" the Location of character is :%d\n",iRet);

    return 0;
}
