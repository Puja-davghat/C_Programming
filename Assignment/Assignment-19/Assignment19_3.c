// ////////////////////////////////////////////////////////////////
//
// Function Name : Pattern
// Description   :display pattern accept Number of rows and Column 
// Input         :  iRows =5 , iCol=5
// Output        : 
//                   $       *       *       *       *
//
//                    #       $       *       *       *
//
//                    #       #       $       *       *
//
//                    #       #       #       $       *
//
//                    #       #       #       #       $
//
// Author        :  Davghat Puja Anil
// Date          :  17 /11/2026
//
// ////////////////////////////////////////////////////////////////
#include<stdio.h>
 void Pattern(int iRow, int iCol)
 {
    int i=0, j=0;
    
    for(i=1 ; i <= iRow; i++ )
{
    for(j=1; j<=iCol ; j++)
    {
         if(i == j)  
        {
          printf("$\t"); 
        }
        else if(i > j)
        {
            printf("#\t");
        } else
        {
             printf("*\t"); 
        }
    }
    printf("\n\n");
} 
 }
int main()
{
 int iValue1=0,iVlaue2 =0;

 printf("Eneter Number of Rows And Columns :\n");
 scanf("%d %d", &iValue1,&iVlaue2);
 Pattern(iValue1,iVlaue2);
     return 0;
}
