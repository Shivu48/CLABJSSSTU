//To read floating-pointing number and then displays the right-most digit of the integral part of the number.

/* 
Write a program that reads floating-pointing number and then displays the right-most digit of the integral part of the number.
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
   float real_number;
   int whole_number, right_digit;

   system("clear");
  
   printf("Enter the Real Number: ");
   scanf("%f", &real_number);

   whole_number = real_number ;  
   right_digit = whole_number % 10 ;  

 
   printf("Right most Digit of the given Real Number i.e. %.2f, is %d\n", real_number, right_digit);
 
   return 0;
}