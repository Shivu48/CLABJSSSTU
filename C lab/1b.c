/ To compute all the roots of a quadratic equation by accepting the non-zero coefficients. Print appropriate messages.

/* Design, develop and execute a program to find and output all the roots of a given quadratic equation, 
for non-zero coefficients.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   int a, b, c, disc; 
   float root1, root2;
   system("clear");
   
   NEXT:
   printf("Enter the Non-Zero Co-efiicients: "); 
   scanf("%d %d %d", &a, &b, &c);

   if(a==0||b==0||c==0)   //if(a==0) alone enough/sufficient
   {
      printf("!!!Invalid Input/Co-efiicients...");
      goto NEXT;        
   }
   
   disc = b*b-4*a*c;   //disc = pow(b,2) - 4 * a * c

   if(disc<0)
   {
      printf("Roots are Imaginery....\n");
   }
   else if(disc>0)
        {
	   root1 = (-b + sqrt(disc)) / (2*a) ;
	   root2 = (-b - sqrt(disc)) / (2*a) ;
           printf("Roots are Real and Distinct\n");
           printf("Root-1 = %.2f\n", root1);
           printf("Root-2 = %.2f\n", root2);
        }
        else
        {
	   root1 = root2 = -b / (2*a) ;
           printf("Roots are Real and Equal/Identical\n");
           printf("Root-1 = %.2f\n", root1);
           printf("Root-2 = %.2f\n", root2);
        }

   return 0;
}