///////////////////////////////////////////////////////////////
//
// Function Name : Main Function
// Description   : Accept name From user and print that name 
// Input         : Integer
// Output        : return name of user
// Author        : Davghat puja Anil
// Date          : 04/11/2026
//
///////////////////////////////////////////////////////////////
#include<stdio.h>
int main()
{
char Name[30];
printf("Please enter full name");
scanf(" %[^\n]",Name);
printf("Your name is %s",Name);
return 0;
}