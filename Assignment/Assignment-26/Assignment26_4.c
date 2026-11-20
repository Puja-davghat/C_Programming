// ////////////////////////////////////////////////////////////////
//
// Function Name : ChkSpecial
// Description   : accept Character check it is special character  or not. 
// Input         :  Enter Character :  *         
// Output        : It is a Special Character  
// Author        :  Davghat Puja Anil
// Date          :  20/11/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdbool.h>
#include <stdio.h>

bool ChkSpecial(char ch)
{
if((ch == '!' )||  ( ch =='@' )||( ch == '#' )|| (ch == '#') || (ch == '$' )||
   (ch == '%') || ( ch =='^') ||   ( ch == '&') || ( ch == '*' ))
    {
        return true;
    }
    else
    {
    return false;
    }
}
int main()
{
    char cValue = '\0';
     bool bRet =false;

    printf("Enter the character :\n");
    scanf(" %c", &cValue);

    bRet = ChkSpecial(cValue);

    if(bRet==true)
    {
        printf("It is a Special Character\n");
    }else 
    {
      printf("It is Not a Special Character\n");
    }
    

    return 0;
}
