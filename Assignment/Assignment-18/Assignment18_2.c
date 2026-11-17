// ////////////////////////////////////////////////////////////////
//
// Function Name : Pattern
// Description   :display pattern accept Number of rows and Column 
// Input         :  iRows =4 , iCol=4
// Output        : 
//                    *       *       *       *

//                    *       *       *       #

//                    *       *       #       #

//                    *       #       #       #
// Author        :  Davghat Puja Anil
// Date          :  16 /11/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
void Pattern(int iRow, int iCol)
{
   int i = 0 , j = 0;

if(iRow != iCol)
{
  printf("Invalid Input \n");
  return;
}

  for(i = 1; i<= iRow; i++)
  {

      for(j = 1; j <= iCol ; j++)
      {
        if((j+ i) <=( iCol +1)) 
        {
          printf("*\t"); 
        }
        else
        {
            printf("#\t");
        }
          
      }
      printf("\n\n");
  }
   

}

int main()
{
   
    int iValue1 = 0,  iValue2 = 0;


   printf("Enter Number of Rows and Column :\n");
   scanf("%d %d",&iValue1,&iValue2);

  Pattern (iValue1, iValue2);

    return 0;
}