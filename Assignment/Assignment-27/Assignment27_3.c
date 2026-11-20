// ////////////////////////////////////////////////////////////////
//
// Function Name : Difference
// Description   : Difference Between Small and Capital Characters 
// Input         :  Enter String : Puja Anil         
// Output        :  4
// Author        :  Davghat Puja Anil
// Date          :  20/11/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>

int Difference(char *str)
{
    int iCap = 0, iSmall = 0;

    while (*str != '\0')
    {
        if ((*str >= 'A') && (*str <= 'Z'))
        {
            iCap++;
        }
        else if ((*str >= 'a') && (*str <= 'z'))
        {
            iSmall++;
        }
        str++;
    }
    return (iSmall - iCap);
}


int main()
{
    char arr[20];
    int iRet =0;

    printf("Enter the String: \n");
    scanf("%[^\n]s", arr);

    iRet = Difference(arr);

    printf("%d", iRet);

    return 0;
}
