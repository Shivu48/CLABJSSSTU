//Using '&' operator, check whether a given number is Odd or Even.

/* Program to check if given number is even or odd using bitwise & operator */

#include <stdio.h>
#include<stdlib.h>

int main()
{
   int number;
   system("clear");
   printf("Enter a Number: "); 
   scanf("%d", &number);
   (number&1) ? printf("Number is ODD\n") : printf("Number is EVEN\n") ;
   //(number&1==0) ? printf("Number is EVEN\n") : printf("Number is ODD\n") ;  
   return 0;
}