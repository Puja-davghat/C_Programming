// 2. Write a program which accept number from user and print factors of that number. (Note: The heading text in the assignment sheet has a typo "even factors", but the output shows all factors up to half of 24)
// Input :  24
// Output : 1  2  4  6  8  12

#include<stdio.h>

void DisplayFactor(int iNo)
{
    int i = 0;
    
    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    
    for(i = 1; i<= iNo ;i++)
    {
        if(iNo % 2 == 0)
        {
            printf("%d\t",i); // Note: fixed assignment template's "print" to "printf"
        }
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter number\n");
    scanf("%d",&iValue);
    
    DisplayFactor(iValue);
    
    return 0;
}
