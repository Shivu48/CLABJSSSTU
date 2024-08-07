/*
To generate and print the first "N" Fibonacci numbers such that Fn = F(n-1) + F(n-2) where n>2. A Fibonacci sequence is defined as “the first and second terms in the sequence are 0 and 1. Subsequent terms are found by adding the preceding two terms in the sequence”.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
   int f1, f2, f, i, n, sum_n, sum_o, sum_e;    //Positive integers ONLY
   system("clear");
   
   printf("\nEnter the Number of Terms: "); 
   scanf("%d", &n); 
   if(n<0) n = -n;   //in case of less than ZERO / -ve number
   f = f1 = 0; f2 = 1;
   printf("%d Fibonacci Numbers are\t", n);
   for(i=1; i<=n; i++)
   {
      printf("%d\t", f);
      f1 = f2;
      f2 = f; 
      f = f1 + f2;    
   }
   printf("\n");
   return 0;
}

/*
Results/Output:
--------------
Enter the Number of Terms: 5
0       1       1       2       3

Enter the Number of Terms: 25
25 Fibonacci Numbers are        0       1       1       2       3       5       8       13      21      34      55      
     89      144    233      377     610     987     1597    2584    4181    6765    10946   17711   28657   46368
*/