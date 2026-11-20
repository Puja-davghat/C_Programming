// ////////////////////////////////////////////////////////////////
//
// Function Name : CountCapital
// Description   : accept string and Display counts of Captial letters .
// Input         :  Enter String:  Puja ANIL Davghat
// Output        :  6
// Author        :  Davghat Puja Anil
// Date          :  20/11/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountCapital(char *str)
{
    int iCnt = 0;

    while (*str != '\0')
    {
        if ((*str >= 'A') && (*str <= 'Z'))
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}
int main()
{
    char arr[20];
    int iRet =0;

    printf("Enter the String: \n");
    scanf("%[^\n]s", arr);

    iRet = CountCapital(arr);

    printf("%d", iRet);

    return 0;
}
