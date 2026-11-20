// ////////////////////////////////////////////////////////////////
//
// Function Name : ChkAlpha
// Description   : accept character from user and Check it is Alphabet or not.
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

BOOL ChkAlpha(char ch)
{
    while (ch= '\0')
    {
        if()
    }
}


int main()
{
    
    char cValue = '\0';
    BOOL bRet = False;

    printf("Enter Character :\n");
    scanf("%c",&cValue);

    bRet = ChkAlpha(cValue);

    if (bRet == True)
    {
        printf("It is a Character. \n");
    }
    else
    {
        printf("It is not a Character .\n");
    }

    return 0;
}
