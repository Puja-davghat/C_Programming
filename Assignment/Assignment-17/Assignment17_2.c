// ////////////////////////////////////////////////////////////////
//
// Function Name : Pattern
// Description   :display pattern accept Number of rows and Column 
// Input         :  iRows =4 , iCol=4
// Output        : 
//                    2       4       6       8
//                    1       3       5       7
//                    2       4       6       8
//                    1       3       5       7
// Author        :  Davghat Puja Anil
// Date          :  16 /11/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>
 void Pattern( int iRows, int iCols)
 {
    int i=0, j=0;
    int iCnt =0;
     for(int i=1 ;i<=iRows;i++)
     {
      if(i  % 2 != 0)
           {
           iCnt= 2;
           }
      else
         {
          iCnt= 1;  
         }
          
      for (int j =1; j <= iCols; j++)
        {
          printf("%d\t",iCnt);
          iCnt= iCnt +2 ;
        }
        printf("\n");
     }
 }

 int main()
 {
    int iValue1 =0, iValue2=0;
    printf("Enter Number of Columns and Rows :");
    scanf("%d %d", &iValue1 ,&iValue2 );
    Pattern(iValue1,iValue2);
    return 0;
    
 }