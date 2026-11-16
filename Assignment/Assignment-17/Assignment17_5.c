// ////////////////////////////////////////////////////////////////
//
// Function Name : Pattern
// Description   :display pattern accept Number of rows and Column 
// Input         :  iRows =4 , iCol=4
// Output        : 
//                    1       2       3       4
//                    2       3       4       5
//                    3       4       5       6
//                    4       5       6       7
// Author        :  Davghat Puja Anil
// Date          :  16 /11/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>
void Pattern(int iRows, int iCols)
{
    int i =0, j=0;
int iCnt = 0;
for(i=1;i <= iRows; i++)
{
    iCnt = i;
    for(j =1;j <= iCols;j++)
   {
   printf("%d\t",iCnt);
    iCnt++;
}
printf("\n\n");
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