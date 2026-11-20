// ////////////////////////////////////////////////////////////////
//
// Function Name : ChkSmall
// Description   : accept character from user and Check it is Small case  or not.
// Input         :  Enter Character :
//                                    g
// Output        :  True
//                  It is a Small Case Character.
// Author        :  Davghat Puja Anil
// Date          :  20/11/2026
//
// ////////////////////////////////////////////////////////////////
#include <stdio.h>
#include<stdbool.h>

typedef int BOOL;

#define True 1
#define False 0

BOOL ChkSmall(char ch)
{
    if((ch >= 'a') && (ch <= 'z') )
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

    bRet = ChkSmall(cValue);

    if (bRet == True)
    {
        printf("True \n It is a Small Case Character. \n");
    }
    else
    {
        printf("False \n It is not a Small Case Character.\n");
    }

    return 0;
}
