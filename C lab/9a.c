//To illustrate the use of Bitwise Operators

/* 
Program to perform the following using bitwise operators:
c = a & b ; d = a | b ; e = ~a
f = a >> n; g = a << n; h = a ^ b
*/

#include <stdio.h>
#include<stdlib.h>

int main()
{
   unsigned short int a, b, c, d, e, f, g, h, n;

   system("clear");
/*
   printf("Enter Two Numbers: "); 
   scanf("%d %d", &a, &b);
*/
   a = 10; b = 5; 
   n = 1;   //'n' for number bits to be shifted
   c = a & b;
   printf("%d Bitwise-AND %d is %d\n", a, b, c) ;

   d = a | b;
   printf("%d Bitwise-OR %d is %d\n", a, b, d) ;

   e = ~a;
   printf("Bitwise-NOT of %d is %d\n", a, e) ;
   
   printf("Enter number of BIT to be shifted: "); scanf("%d", &n);

   f = a >> n;
   printf("Bitwise-Right Shift of %d by %d bit is %d\n", a, n, f) ;

   g = a << n;
   printf("Bitwise-Left Shift of %d by %d bit is %d\n", a, n, g) ;

   h = a ^ b;
   printf("%d Bitwise-Ex-OR/XOR %d is %d\n", a, b, h) ;

   return 0;
}