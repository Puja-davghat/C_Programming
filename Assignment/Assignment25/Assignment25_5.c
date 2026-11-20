// ////////////////////////////////////////////////////////////////
//
// Function Name :  DisplaySchedule
// Description   : accept input Division A,B,C,D and Display as per Exam time.
// Input         :  Enter Division :
//                  b
// Output        :  Your Exam At 8:30 AM.
// Author        :  Davghat Puja Anil
// Date          :  20/11/2026
//
// ////////////////////////////////////////////////////////////////
#include <stdio.h>
void DisplaySchedule(char chDiv)
{

   if(chDiv == 'A' || chDiv == 'a')
   {
    printf("Your Exam At 7 AM.");
   }
   else if(chDiv == 'B' || chDiv == 'b')
   {
    printf("Your Exam At 8:30 AM.");
   }
   else if (chDiv == 'C' || chDiv == 'c')
   {
    printf("Your Exam At 9:20 AM.");
   }
   else if (chDiv == 'D' || chDiv == 'd')
   {
    printf("Your Exam At 10:30 AM.");        
   }
   else
   {
    printf("Invalid Input\n");
   }


}

int main()
{
    
    char cValue = '\0';
   

    printf("Enter Division :\n");
    scanf(" %c", &cValue);
    DisplaySchedule(cValue);

    return 0;
}
