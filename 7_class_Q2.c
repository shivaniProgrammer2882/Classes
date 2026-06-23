#include <stdio.h>

int main(void)
{  
     int date;
     int month;
     int year;
     //taking input for date,month,year
     printf("enter date: ");
     scanf("%i",&date);
     printf("enter month: ");
     scanf("%i",&month);
     printf("enter year: ");
     scanf("%i",&year);
     printf("the date of today is %i/%i/%i/\n",date,month,year);
 }               
