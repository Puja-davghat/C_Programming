// ////////////////////////////////////////////////////////////////
//
// Function Name : ChkAlpha
// Description   : accept character from user and Check it is Alphabet or not.
// Input         :  Enter Character :
//                                    A
// Output        :  It is a Character.
// Author        :  Davghat Puja Anil
// Date          :  20/11/2026
//
// ////////////////////////////////////////////////////////////////
#include <stdio.h>
#include<stdbool.h>

typedef int BOOL;

#define True 1
#define False 0

BOOL ChkAlpha(char ch)
{
    if((ch >= 'a') && (ch <= 'z') || (ch >= 'A') && (ch <= 'Z') )
    {
        return True;
    }
    else 
    {
        return False;        
    }

}

int main()
{
    
    char cValue = '\0';
    BOOL bRet = False;

    printf("Enter Character :\n");
    scanf(" %c", &cValue);

    bRet = ChkAlpha(cValue);

    if (bRet == True)
    {
        printf("True \n It is a Character. \n");
    }
    else
    {
        printf("False \n It is not a Character .\n");
    }

    return 0;
}
