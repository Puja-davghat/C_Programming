/*
////////////////////////////////////////////////////////////
//
// Function Name : CheckAdmission
// Description   : It is used to check admission eligibility
// Input         : Float, Integer
// Output        : Void
// Author        : Puja Anil Davghat
// Date          : 22/10/2026
//
////////////////////////////////////////////////////////////
*/

#include <stdio.h>
#include <stdlib.h>

void CheckAdmission(float fMarks, int iAge)
{
    if (iAge < 0 || fMarks < 0 || fMarks > 100 )
    {
        printf("Invalid input");
    } 
      else if(fMarks >= 60 && iAge >= 17)
     {
       printf("Eligible for Admiision");
     }
    else
    {
        printf("Not Eligible for Admiision");
    }

}

int main()
{
    float fMarks = 0.0f;
    int iAge = 0;

    printf("Enter marks and age: ");
    scanf("%f %d", &fMarks, &iAge);

    CheckAdmission(fMarks, iAge);

    return EXIT_SUCCESS;
}