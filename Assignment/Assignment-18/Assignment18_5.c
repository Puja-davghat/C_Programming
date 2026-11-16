// ////////////////////////////////////////////////////////////////
//
// Function Name : Pattern
// Description   :display pattern accept Number of rows and Column 
// Input         :  iRows =6 , iCol=5
// Output        : 
//                    
//                        1       2       3       4       5

//                        1       *       *       *       5

//                        1       *       *       *       5

//                        1       *       *       *       5

//                        1       *       *       *       5

//                        1       2       3       4       5

//
// Author        :  Davghat Puja Anil
// Date          :  16 /11/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
void Pattern(int iRow, int iCol)
{
   int i = 0 , j = 0;

  for(i = 1; i<= iRow; i++)
  {

      for(j = 1; j <= iCol ; j++)
      {
        if( i ==1 || i == iRow || j == 1 || j==iCol)  
        {
          printf("%d\t",j); 
        }
        else
        {
            printf("*\t");
        }
          
      }
      printf("\n\n");
  }
   

}

int main()
{
   
    int iValue1 = 0,  iValue2 = 0;


   printf("Enter Number of Rows and columns:\n");
   scanf("%d %d",&iValue1,&iValue2);

  Pattern (iValue1, iValue2);

    return 0;
}
