// ////////////////////////////////////////////////////////////////
//
// Function Name : Difference
// Description   :Check Whether String Contains Vowels 
// Input         :  Enter String : Puja Anil         
// Output        : Contains Vowel
// Author        :  Davghat Puja Anil
// Date          :  20/11/2026
//
// ////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>

bool ChkVowel(char *str)
{
    while (*str != '\0')
    {
        if ((*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u') ||
            (*str == 'A') || (*str == 'E') || (*str == 'I') || (*str == 'O') || (*str == 'U'))
        {
            return true;
        }
        str++;
    }
    return false;
}

int main()
{
    char Arr[50];
    bool bRet = false;

    printf("Enter String :\n");
    scanf("%[^\n]s", Arr);

    bRet = ChkVowel(Arr);

    if (bRet == true)
    {
        printf("Contains Vowel\n");
    }
    else
    {
        printf("There is no Vowel\n");
    }

    return 0;
}
