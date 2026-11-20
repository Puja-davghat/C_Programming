// ////////////////////////////////////////////////////////////////
//
// Function Name : Reverse
// Description   : Display String in Reverse Order
// Input         :  Enter String : abcde        
// Output        : Reversed String is : edcba
// Author        :  Davghat Puja Anil
// Date          :  20/11/2026
//
// ////////////////////////////////////////////////////////////////

#include <stdio.h>

void Reverse(char *str)
{
    int iCnt = 0;

    while (str[iCnt] != '\0')
    {
        iCnt++;
    }

    iCnt--;
    while (iCnt >= 0)
    {
        printf("%c", str[iCnt]);
        iCnt--;
    }
    printf("\n");
}

int main()
{
    char Arr[50];

    printf("Enter String :\n");
    scanf("%[^\n]s", Arr);

    printf("Reversed String is : ");
    Reverse(Arr);

    return 0;
}
