// ////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : if it is capital, display all characters from that letter up to 'Z'; if it is small, display all characters in reverse order down to 'a'; and for any other character, display nothing
// Input         :  Enter Character : H            
// Output        :  H       I       J       K       L       M       N       O       P       Q       R       S       T       U       V
//                  W       X       Y       Z 
//
//                  Enter Character :f
//                  f       e       d       c       b       a         
// Author        :  Davghat Puja Anil
// Date          :  20/11/2026
//
// ////////////////////////////////////////////////////////////////

#include <stdio.h>

void Display(char ch)
{
    char cCnt = '\0';

    if ((ch >= 'A') && (ch <= 'Z'))
    {
        for (cCnt = ch; cCnt <= 'Z'; cCnt++)
        {
            printf("%c\t", cCnt);
        }
        printf("\n");
    }
    else if ((ch >= 'a') && (ch <= 'z'))
    {
        for (cCnt = ch; cCnt >= 'a'; cCnt--)
        {
            printf("%c\t", cCnt);
        }
        printf("\n");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the character :\n");
    scanf(" %c", &cValue);

    Display(cValue);

    return 0;
}
