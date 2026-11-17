// ////////////////////////////////////////////////////////////////
//
// Function Name : Pattern
// Description   :display pattern accept Number of rows and Column 
// Input         :  iRows =4 , iCol=4
// Output        : 
//                    
//                        *
//
//                        *       *
//
//                        *       *       *
//
//                        *       *       *       *
//
// Author        :  Davghat Puja Anil
// Date          :  17 /11/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>
void Pattern(int iRows, int iCols)
{
int i =0, j= 0;
for(i =1;i <= iRows; i++)
{
    for(j=1 ; j<= iCols; j++)
    {
        if(i >= j)
        {
            printf("*\t");
        
        }
        else{
            printf("\t");
        }
    }
    printf("\n\n");
}
}
int main()
{

    int iValue1 =0;
    int iValue2 =  0;

    printf("Eneter the Numbers Of Rows And Columns :\n");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1,iValue2);
    return 0;
}