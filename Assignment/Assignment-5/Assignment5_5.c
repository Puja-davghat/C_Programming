/*
////////////////////////////////////////////////////////////
//
// Function Name : CheckCharacterType
// Description   : It is used to identify the type of character
// Input         : Character
// Output        : Void
// Author        : Puja Anil Davghat
// Date          : 22/10/2026
//
////////////////////////////////////////////////////////////
*/

#include <stdio.h>
#include <stdlib.h>

void CheckCharacterType(char cValue)
{
    if(cValue >= 'A' && cValue <= 'Z')
    {
        printf("Uppercase Alphabet");
    }else if(cValue >= 'a' && cValue <= 'z')
    {
        printf("Lowercase Alphabet");
    }else if(cValue >= '0' && cValue <= '1')
    {
        printf("Digit");
    }
    else
    {
        printf("Special Character");
    }
    
}

int main()
{
    char cValue = '\0';

    printf("Enter a character: ");
    scanf(" %c", &cValue);

    CheckCharacterType(cValue);

    return EXIT_SUCCESS;
}