//To read floating-pointing number, separate and displays the integral and decimal part of the given.

/* 
Write a program that reads floating-pointing number, separate and displays the integral and decimal part of the given.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
   float real_number, decimal_part;
   int whole_number;

   system("clear");
  
   printf("Enter the Real Number: ");
   scanf("%f", &real_number);

   whole_number = real_number ; 
   decimal_part = real_number - whole_number ;
 
   printf("Integral Part is %d and Decimal Part is %.2f of the given Real Number i.e. %.2f\n", whole_number, decimal_part, real_number);
 
   return 0;
}