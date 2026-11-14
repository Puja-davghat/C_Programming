// ////////////////////////////////////////////////////////////////
//
// Function Name : Pattern
// Description   :display pattern  Number of rows and Column 
// Input         : Enter Number of rows and Column :3
// 5
// Output        : 
//                     A       A       A       A       A
//
//                     B       B       B       B       B
//
//                     C       C       C       C       C
//
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
  
      for(j = 1; j <= iCol ; j++)
      {
          printf("%c\t", ch);
       
      }
      printf("\n\n");
         ch++;
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