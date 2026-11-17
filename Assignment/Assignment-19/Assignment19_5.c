// ////////////////////////////////////////////////////////////////
//
// Function Name : Pattern
// Description   :display pattern accept Number of rows and Column 
// Input         :  iRows =4 , iCol=4
// Output        : 
//                    
//                        1       2       3       4
//
//                                2       3       4
//
//                                        3       4
//
//                                                4
//
// Author        :  Davghat Puja Anil
// Date          :  17 /11/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>
void Pattern(int iRow, int iCol)
{
    int i =0,j =0;

    for(i = 1; i<= iRow ; i++)
    {
        for(j=1 ; j<=iCol; j++)
        {
        if(i <= j)
        {
            printf("%d\t",j); 
        }else
        {
            printf("\t");
        }
        }
        printf("\n\n");
    }
}

int main()
{

    int iValue1= 0,iValue2= 0;

    printf("Enter Number of Rows And Columns :\n");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}