// ////////////////////////////////////////////////////////////////
//
// Function Name : Pattern
// Description   :display pattern accept Number of rows and Column 
// Input         :  iRows =4 , iCol=4
// Output        : 
//                    a       b       c       d
//                    1       2       3       4
//                    a       b       c       d
//                    1       2       3       4
// Author        :  Davghat Puja Anil
// Date          :  16 /11/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>
void Pattern(int iRows, int iCols)
{
    int i=0, j =0;
    int iCnt=1;
    char ch = '\0' ;

  for(int i=1 ;i<=iRows;i++)
     {
          ch ='a';
      for (int j =1; j <= iCols; j++)
        {
            if(i % 2 != 0)
           {
           printf("%c\t", ch);
           ch++;
           }
           else{

          printf("%d\t",j);
        
           }
        }

        printf("\n");
     }
}

int main()
{
int iValue1=0,iValue2=0;
 printf("Enter Numbr of Rows and COlumns :\n");
 scanf("%d %d", &iValue1,&iValue2);
Pattern(iValue1,iValue2);

    return 0;
}