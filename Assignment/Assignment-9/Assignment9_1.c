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