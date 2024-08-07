// Program to find the Area of a Triangle for the given Three sides

/*
To find the area of a Triangle with 3 sides given using
formula, Area = √(s(s-a) (s-b) (s-c))
where a, b and c are lengths of sides of Triangle, and
s = (a+b+c) / 2
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
   float a, b, c, s, area;

   system("clear");
   printf("Enter three Sides of a Triangle: ");
   scanf("%f %f %f", &a, &b, &c);
   s = ( a + b + c ) / 2 ;

   //printf("Value of s is %f\n", s); 
   //area = (float)sqrt(s*(s-a)(s-b)(s-c)) ;

   area = sqrt(s*(s-a)(s-b)(s-c)) ;
   printf("Area of a Triangle is %.2f\n", area);
   return 0;
}