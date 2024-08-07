* 
Given the values of the variables x, y and z, write a program to rotate their values such that 
x has the value of y, y has the value of z, and z has the value of x.
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
   int x, y, z, temp;

   system("clear");
  
   printf("Enter the values for x, y and z: ");
   scanf("%d %d %d", &x, &y, &z);

   printf("Values of x, y and z Before Rotation\n");
   printf("Value of X is %d\n", x );
   printf("Value of Y is %d\n", y );
   printf("Value of Z is %d\n", z );
 
   temp = x ;
   x = y ;
   y = z ;
   z = temp ;

   printf("Values of x, y and z After Rotation\n");
   printf("Value of X is %d\n", x );
   printf("Value of Y is %d\n", y );
   printf("Value of Z is %d\n", z );

   return 0;
}