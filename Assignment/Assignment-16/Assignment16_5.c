// ////////////////////////////////////////////////////////////////
//
// Function Name : Pattern
// Description   :display pattern  Number of rows and Column 
// Input         : Enter Number of rows and Column :3
// 4
// Output        : 
//                    1       2       3       4
//
//                      5       6       7       8
//
//                      9       10      11      12
// Author        : Davghat Puja Anil
// Date          :  14 /11/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>
void Pattern(int iRow, int iCol)
{
    
   int i = 0 , j = 0;
int icnt = 1;
  for(i=1 ; i<= iRow;i++)
  {

      for(j = 1; j <= iCol ; j++)
      {
          printf("%d\t", icnt);
          icnt++;
      }
      printf("\n\n");
                        
  }
   

}
int main()
{
int iValue1 =0, iValue2=0;

printf("Enter Number of rows and Column :");
scanf("%d %d", &iValue1, &iValue2);

Pattern(iValue1,iValue2);
    return 0;
}