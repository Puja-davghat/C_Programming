// ////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : Print the Number of * and #.
// Input         : Integer Number: 5.
// Output        : *    *   *   *   *   #   #   #   #   #
// Author        : Puja Anil Davghat
// Date          : 2/11/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>
void Display(int iNo)
{
    int iRow =0;
    int iCol = 0;
    if(iNo<0)
    {
        iNo= -iNo;
    }
    for(iRow= 1; iRow<= iNo; iRow++)
    { 
         printf("*");}
        for(iCol =2; iCol<=iRow; iCol++)
        {
           
            printf("#");
        }
        
    }



int main ()
{
int iValue = 0;
printf("Eneter Number :");
scanf("%d",&iValue);

Display(iValue);


    return 0;
}