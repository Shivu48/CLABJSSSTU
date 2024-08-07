//Using 'ternary' operator, find the largest of three numbers.

/*Program to perform the following using 'ternary' operator:
  Find the largest of three numbers 
*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
   int n1, n2, n3, big;

   system("clear");
   printf("Enter Three Numbers: "); 
   scanf("%d %d %d", &n1, &n2, &n3);
   big = (n1>n2) ? (n1>n3 ? n1 : n3) : (n2>n3 ? n2 : n3);
   printf("Biggest among %d,%d and %d is %d\n",n1,n2, n3, big); 
}