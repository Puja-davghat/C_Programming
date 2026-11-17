// ////////////////////////////////////////////////////////////////
//
// Function Name : Pattern
// Description   :display pattern accept Number of rows and Column 
// Input         :  iRows =3 , iCol=5
// Output        :5       4       3       2       1

//                5       4       3       2       1

//                5       4       3       2       1
//
// Author        :  Davghat Puja Anil
// Date          :  17 /11/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>
void Pattern(int iRow,int iCol)
{
    int i = 0 , j = 0;

  for(i = 1; i<= iRow  ; i++)
  {
      for(j = iCol; j >= 1 ; j--)
      {  
        printf("%d\t",j);
      }
          printf("\n\n");
      }
        
    }


int main()
{
int iValue1=0, iValue2=0;

printf("Enter Number Of Rows And Columns :\n");
scanf("%d %d",&iValue1,&iValue2);

Pattern(iValue1,iValue2);

    return 0;
}