
// ////////////////////////////////////////////////////////////////
//
// Function Name : Pattern
// Description   :display pattern accept Number of rows and Column 
// Input         :  Enetr Number of Elements :   8
// Output        :  2       4       6       8       10      12      14      16
// Author        :  Davghat Puja Anil
// Date          :  18/11/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iNo)
{
    int  iCnt =1;
    
     int  i =0;
   
     for(i =1; i<= iNo * 2  ; i++)
     { if(i % 2 ==0)
        {
        printf("%d\t",iCnt);
        }
        else
        {
        printf("");
    
    }
    iCnt++;
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