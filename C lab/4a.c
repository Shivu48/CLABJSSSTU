//) Using 'ternary' operator, check whether a given number is Positive or Negative.

/* Program to perform the following using ternary operator: Check if given number is positive or negative / Odd or Even */ 

#include <stdio.h>
#include<stdlib.h>

int main()
{
   int number;

   system("clear");
   printf("Enter a Number: "); 
   scanf("%d", &number);
   (number>0) ? printf("Number is Positive\n") : printf("Number is Negative OR ZERO\n") ;

   (number%2) ? printf("%d is ODD Number\n", number) : printf("%d is EVEN Number\n", number) ;   //Using % MOD DIV Operator
   return 0;
}