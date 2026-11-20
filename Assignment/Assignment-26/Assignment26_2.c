// ////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : accept character from user and change Correcsponding capital or small letter .
// Input         :  Enter Character : A            
// Output        :  a
// Author        :  Davghat Puja Anil
// Date          :  20/11/2026
//
// ////////////////////////////////////////////////////////////////
#include<stdio.h>

void Display(char ch)
{
if(ch >= 'A'  && ch <= 'Z')
    {
     ch = ch+32;
     printf("%c",ch);
    }
    else if(ch >= 'a'  && ch <= 'z')
    {
         ch = ch -32;
         printf("%c",ch);
    }
     else 
    {
        
         printf("%c",ch);
    }
    
}

int main()
{
    int cValue='\0';

printf("Enter Character :\n");
scanf(" %c", &cValue);

Display(cValue);

    return 0;
}
