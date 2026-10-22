/*
////////////////////////////////////////////////////////////
//
// Function Name : CheckVotingEligibility
// Description   : It is used to check voting eligibility based on age
// Input         : Integer
// Output        : Void
// Author        : Puja Anil Davghat
// Date          : 22/10/2026
//
////////////////////////////////////////////////////////////
*/
#include <stdio.h>
#include <stdlib.h>

void CheckVotingEligibility(int iAge)
{
    if(iAge < 18)
    {
        printf("Invalid Age");
    }else if (iAge >= 18)
    {
        printf("Eligible for Voting");
    }else
    {
printf(" Not Eligible for Voting");
    }
    
   
}

int main()
{
    int iAge = 0;

    printf("Enter your age: ");
    scanf("%d", &iAge);

    CheckVotingEligibility(iAge);

    return EXIT_SUCCESS;
}