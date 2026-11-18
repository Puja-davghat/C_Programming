// ////////////////////////////////////////////////////////////////
//
// Function Name : Pattern
// Description   :display pattern accept Number of rows and Column 
// Input         :  Enetr Number of Elements :   5
// Output        :   A      B       C       D       E
// Author        :  Davghat Puja Anil
// Date          :  18/11/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iNo)
{
    int  i =0;
    char ch = 'A';
     for(i =1; i<= iNo ; i++)
     {
       printf("%c\t",ch);
       ch++;
     }
}

int main()
{

    int iValue = 0;

    printf("Enetr Number of Elements :\n");
    scanf("%d",&iValue);

    Pattern(iValue);
    return 0;

}