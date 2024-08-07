/*
To reverse a given four-digit integer number and check whether it is a palindrome or not. Output the given number with suitable message.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n, temp, rev_digits, digit;    
   system("clear");
   
   printf("\nEnter the Number of Terms: "); 
   scanf("%4d", &n);   //For maximum four-digits integer number as input
   temp = n;
   rev_digits=0;
   while(n)
   {
      digit = n % 10;
      rev_digits = rev_digits * 10 + digit;   // rev_digits *= 10 + digit; incorrect evaluation
      n /= 10;    
   }
   
   if(rev_digits == temp)
      printf("Reversed form of %d is %d - Palindrome\n", temp, rev_digits);
   else
      printf("Reversed form of %d is %d - NOT a Palindrome\n", temp, rev_digits);

   return 0;
}