// ////////////////////////////////////////////////////////////////
//
// Function Name : CountSmall
// Description   : accept string and Display counts of Small letters .
// Input         :  Enter String: Puja Anil Davghat
// Output        :  12
// Author        :  Davghat Puja Anil
// Date          :  20/11/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountSmall(char *str)
{
    int iCnt = 0;

    while (*str != '\0')
    {
        if ((*str >= 'a') && (*str <= 'z'))
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

    iRet = CountSmall(arr);

    printf("%d", iRet);

    return 0;
}
