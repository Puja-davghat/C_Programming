// ////////////////////////////////////////////////////////////////
//
// Function Name : Pattern
// Description   :display pattern accept Number of rows and Column 
// Input         :  iRows =4 , iCol=4
// Output        : 
//                    *       *       *       *
//
//                    *       *       *
//
//                    *       *
//
//                    *
//
//
// Author        :  Davghat Puja Anil
// Date          :  17 /11/2026
//
// ////////////////////////////////////////////////////////////////
#include<stdio.h>
void Pattern(int iRow ,int iCols)
{  int i = 0, j =0 ;

    for(i =1; i <= iRow ; i++)
    {
        for(j=1; j<= iCols ;j++)
        {
            if((j+i)<= (iCols+1) )
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
int iValue1 = 0, iValue2 =0;

printf("Enter Number Of Rows And Columns :\n");
scanf("%d%d",&iValue1,&iValue2);

Pattern(iValue1,iValue2);
return 0;
}