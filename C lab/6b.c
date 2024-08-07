//  To generate and print all the prime numbers between range N1 and N2, where "N1" and 
//  "N2" are value supplied by the user.
/* Write a program to generate and print all the prime numbers between range N1 and N2,
   where "N1" and "N2" are value supplied by the user. 
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i, n, n1, n2, flag; 
   
   system("clear");
   printf("\nEnter the Lower Limit and Upper Limit: N1 and N2"); 
   scanf("%d %d", &n1, &n2);
   //'N' is a prime number if it is divisible by 1 or itself/N
   for(n = n1; n <= n2 ; n++)
   {
      flag = 1;
      for(i=2; i <= (n/2); i++)
      {    
         if(n%i==0)
         {
            flag = 0;
            break;
         }  
      }	
      if(flag)
         printf("%d\t", n);          
   }   
   printf("\n");          
  return 0;
}