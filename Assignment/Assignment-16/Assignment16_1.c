// ////////////////////////////////////////////////////////////////
//
// Function Name : Pattern
// Description   :display pattern  Number of rows and Column 
// Input         : Enter Number of rows and Column :4
//4 
// Output        : 
//                       A       B       C       D
//
//                        A       B       C       D
//
//                        A       B       C       D
//
//                        A       B       C       D

// Author        : Davghat Puja Anil
// Date          :  14 /11/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0 , j = 0;
    char ch = 'A';

  for(i = 1; i<= iRow; i++)
  {
     ch = 'A';
      for(j = 1; j <= iCol ; j++)
      {
          printf("%c\t", ch);
          ch++;
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