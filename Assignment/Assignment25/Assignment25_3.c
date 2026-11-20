// ////////////////////////////////////////////////////////////////
//
// Function Name : ChkDigit
// Description   : accept character from user and Check it is Digit or not.
// Input         :  Enter Character :
//                                    6
// Output        :  True
//                  It is a Digit .
// Author        :  Davghat Puja Anil
// Date          :  20/11/2026
//
// ////////////////////////////////////////////////////////////////
#include <stdio.h>
#include<stdbool.h>

typedef int BOOL;

#define True 1
#define False 0

BOOL ChkDigit(char ch)
{
    if((ch >= '0') && (ch <= '9') )
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

    bRet = ChkDigit(cValue);

    if (bRet == True)
    {
        printf("True \n It is a Digit. \n");
    }
    else
    {
        printf("False \n It is not a Digit .\n");
    }

    return 0;
}
