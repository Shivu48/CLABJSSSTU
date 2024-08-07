/*
To determine whether a given number is "Odd" or "Even" and print the message NUMBER IS EVEN or NUMBER IS ODD 
with and without using "else" statement.
*/

//Write a program to determine whether a given number is ‘odd’ or ‘even’ and print the message NUMBER IS EVEN or NUMBER IS ODD with and without using else option.

#include <stdio.h>
#include <stdlib.h>

int main()
{
   int number;

   system("clear");
   printf("Enter a Number: "); scanf("%d", &number);

   printf("*Using IF...ELSE Statement\n");   
   if((number%2)==0) 
      printf("NUMBER IS EVEN\n");
   else
      printf("NUMBER IS ODD\n");

   printf("*Without using IF...ELSE Statement\n");   
   if((number%2)==0)
      printf("NUMBER IS EVEN\n");

   if((number%2)!=0)   //if(number%2)   or   if((number%2)==1)
      printf("NUMBER IS ODD\n") ;

   return 0;
}