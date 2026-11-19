// ////////////////////////////////////////////////////////////////
//
// Function Name : CountWhite
// Description   : accept string from user and Count the Number of WhiteSpace.
// Input         :  Enter String :   Puja Anil Davghat
// Output        :  2
// Author        :  Davghat Puja Anil
// Date          :  20/11/2026
//
// ////////////////////////////////////////////////////////////////


#include<stdio.h>

int CountWhite(char *str)
{
int iCnt =0;
 while(*str != '\0')
 {
    if(*str == ' ')
    {
        iCnt++;

    }
    *str++;
 }
 return iCnt++;

}

int main()
{
char arr[20];
int iRet =0;

printf("Enter String : \n");
scanf("%[^'\n']s", arr);

iRet = CountWhite(arr);

printf("%d\n",iRet);

    return 0;
}