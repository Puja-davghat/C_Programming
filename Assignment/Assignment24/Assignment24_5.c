// ////////////////////////////////////////////////////////////////
//
// Function Name : FirstChar
// Description   : accept string from user and reverse the string 
// Input         :  Enter String :Puja Anil Davghat
// Output        :  Enter Character :  a
//                                    the Location of character is :15
// Author        :  Davghat Puja Anil
// Date          :  20/11/2026
//
// ////////////////////////////////////////////////////////////////
#include <stdio.h>
int Strchar *str, char ch)
{
int iCount =0, iPos=0 ;

    while (str[iCount] != '\0')
    {
        if (str[iCount] == ch)
        {
           iPos=iCount;
        }
             iCount++;       

    }
    return iPos;
}

int main()
{
    char arr[20];
    char cValue = '\0';
  int iRet = 0;

    printf("Enter String :\n");
    scanf("%[^\n]s", arr);

    printf("Enter Character :\n");
    scanf(" %c", &cValue);

    iRet = LastChar(arr, cValue);

   
        printf(" the Location of character is :%d\n",iRet);

    return 0;
}
