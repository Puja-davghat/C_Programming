
// ////////////////////////////////////////////////////////////////
//
// Function Name : Pattern
// Description   :display pattern accept Number of rows and Column 
// Input         :  Enetr Number of Elements :   5
// Output        :   5      #       4       #       3       #       2       #       1
// Author        :  Davghat Puja Anil
// Date          :  18/11/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iNo)
{
    int  iCnt =1;
    
     for(iCnt =iNo ; iCnt >= 1 ; iCnt--)
     {   printf("%d\t # \t", iCnt);
        
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