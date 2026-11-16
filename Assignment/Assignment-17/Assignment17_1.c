// ////////////////////////////////////////////////////////////////
//
// Function Name : Pattern
// Description   :display pattern accept Number of rows and Column 
// Input         :  iRows =4 , iCol=4
// Output        : 
//                    1       2       3       4
//                    5       6       7       8
//                    9       1       2       3
//                    4       5       6       7
// Author        :  Davghat Puja Anil
// Date          :  16 /11/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>
void Pattern(int iRows, int iCols)
{
    int i=0, j=0;
    int iCnt =1;
     for(int i=1 ;i<=iRows;i++)
     {
        for (int j =1; j <= iCols; j++)
        {
            printf("%d\t",iCnt);
             iCnt++;
             if(iCnt>9)
           {
                iCnt =1;
         }
          
        }
        printf("\n");
        
     }
}
 int main()
 {
    int iValue1 = 0, iValue2 = 0;

printf("Enter Number of Rowsand Columns : \n");
scanf("%d %d", &iValue1, &iValue2);
Pattern(iValue1,iValue2);
    return 0; 

 }