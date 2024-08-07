/* To input N integer numbers into a single dimension array, sort them in to ascending order using “BUBBLE SORT” technique, 
and then to print both the given array and the sorted array with suitable headings. */

/* Design, develop and execute a program in C to input N integer numbers into a single dimension array, sort them in to 
   ascending order using BUBBLE SORT technique, and then to print both the given array and the sorted array 
   with suitable headings. 
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int A[100], i, j, n, temp;
    
    system("clear");
    printf("\nEnter the Size of an Array-A: "); 
    scanf("%d",&n); 
    
    printf("\nInput %d integers into Array-A: ", n);
    for(i=0; i < n; i++)
       scanf("%d",&A[i]); 
    
    printf("\nUNSORTED Elements/Before Sorting: ");
    for(i=0; i < n; i++)
       printf("%d   ",A[i]); 

   //sorting into Ascending order using “BUBBLE SORT” technique/algorithm
   for(j=1; j<n; j++)
      for(i=0; i<n-j; i++)
         if(A[i] > A[i+1])
         {
             temp = A[i];
             A[i] = A[i+1];
             A[i+1] = temp;
         }

    printf("\nSORTED Elements/After Sorting: ");
    for(i=0; i < n; i++)
       printf("%d   ",A[i]); 

    printf("\n");
    return 0;
}