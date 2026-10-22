/*
////////////////////////////////////////////////////////////
//
// Function Name : DisplayGrade
// Description   : It is used to display the grade based on marks
// Input         : Float
// Output        : Void
// Author        : Puja Anil Davghat
// Date          : 22/10/2026
//
////////////////////////////////////////////////////////////
*/

#include <stdio.h>
#include <stdlib.h>

void DisplayGrade(float fMarks)
{
    if(fMarks < 0 || fMarks > 100)
    {
        printf("Invalid Mark");
    }
    else if(fMarks < 40 )
    {
    printf("Fail");
    }
    else if (fMarks >= 40 && fMarks <= 59)
   
    {
         printf("Gread D");

    }
    else if (fMarks >= 60 && fMarks <= 74)
    {
        printf("Gread C");
    }
    else if (fMarks <=75 && fMarks >= 89)
    {
        printf("Gread B");
    
    }
    else
    {
       printf("Gread A");
    }
    
}

int main()
{
    float fMarks = 0.0f;

    printf("Enter marks: ");
    scanf("%f", &fMarks);

    DisplayGrade(fMarks);

    return EXIT_SUCCESS;
}