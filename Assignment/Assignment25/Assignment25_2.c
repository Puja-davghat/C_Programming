// ////////////////////////////////////////////////////////////////
//
// Function Name : ChkAlpha
// Description   : accept character from user and Check it is Captial or not.
// Input         :  Enter Character :
//                                    P
// Output        :  True
//                  It is a Capital .
// Author        :  Davghat Puja Anil
// Date          :  20/11/2026
//
// ////////////////////////////////////////////////////////////////
#include <stdio.h>
#include<stdbool.h>

typedef int BOOL;

#define True 1
#define False 0

BOOL ChkCapital(char ch)
{
    if((ch >= 'A') && (ch <= 'Z') )
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

    bRet = ChkCapital(cValue);

    if (bRet == True)
    {
        printf("True \n It is a Capital. \n");
    }
    else
    {
        printf("False \n It is not a Capital .\n");
    }

    return 0;
}
