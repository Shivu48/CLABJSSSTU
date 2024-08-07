#include <stdio.h>
#include <stdlib.h>

int main()
{
   float radius, area;

   system("clear");
   printf("Enter the Radius: ");
   scanf("%f", &radius);
   area = 22.0 / 7.0 * radius * radius ;    
   printf("Area of a Circle is %.2f for the given Radius %.2f\n", area, radius);
   return 0;  
}