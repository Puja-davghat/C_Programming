// ////////////////////////////////////////////////////////////////
//
// Function Name : ChkChar
// Description   : accept string from user and convert it into Upper case to lower and lower to upper.
// Input         :  Enter String :    Puja Anil Davghat
// Output        :  Enter Character :  e
//                                     Character is not Found
// Author        :  Davghat Puja Anil
// Date          :  19/11/2026
//
// ////////////////////////////////////////////////////////////////
#include <stdio.h>

typedef int BOOL;

#define True 1
#define False 0

BOOL ChkChar(char *str, char ch)
{
    while (*str != '\0')
    {
        if (*str == ch)
        {
            return True;
        }
        str++;
    }
    return False;
}

int main()
{
    char arr[20];
    char cValue = '\0';
    BOOL bRet = False;

    printf("Enter String :\n");
    scanf("%[^\n]s", arr);

    printf("Enter Character :\n");
    scanf(" %c", &cValue);

    bRet = ChkChar(arr, cValue);

    if (bRet == True)
    {
        printf("Character is Found\n");
    }
    else
    {
        printf("Character is not Found\n");
    }

    return 0;
}
