// ////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : accept Character and Display it's dec,hexa, oct Value. 
// Input         :  Enter Character :  A         
// Output        :  Decimal         : 65
//                  Octal           : 0101
//                  Hexadecimal     : 0X41
// Author        :  Davghat Puja Anil
// Date          :  20/11/2026
//
// ////////////////////////////////////////////////////////////////

#include <stdio.h>

void Display(char ch)
{
    printf("Decimal\t\t: %d\n", ch);
    printf("Octal\t\t: 0%o\n", ch);
    printf("Hexadecimal\t: 0X%X\n", ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter the character :\n");
    scanf(" %c", &cValue);

    Display(cValue);

    return 0;
}
