
// ////////////////////////////////////////////////////////////////
//
// Function Name : Pattern
// Description   :display pattern accept Number of rows and Column 
// Input         :  Enetr Number of Elements :   5
// Output        :   1        *      2        *      3        *      4        *      5        *
// Author        :  Davghat Puja Anil
// Date          :  18/11/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iNo)
{
    int  iCnt =1;
    
     for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
     {   printf("%d\t * \t", iCnt);
        
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