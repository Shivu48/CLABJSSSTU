* To perform addition and subtraction of two matrices after checking their compatibility and print both input
   & output matrices with suitable headings. */

/* Write a C program to read two matrices A (M x N) and B(M x N) and perform addition OR subtraction of A and B. Output the 
 given matrices, their sum and differences. */

#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int main()
{
   int A[MAX][MAX], B[MAX][MAX], S[MAX][MAX], D[MAX][MAX], i, j, m, n, p, q;
   
   system("clear");
   printf("\nEnter the Size/Order/Dim. of the Matrix-A: ");
   scanf("%d %d", &m, &n); 

   printf("\nEnter the Size/Order/Dim. of the Matrix-B: ");
   scanf("%d %d", &p, &q); 

   if( !(m==p && n==q) )   //if(m!=p || n!=q)
   {
       printf("\nSize/Order/Dim. of the Input Matrices NOT Compatibility/Matching...\n");
       exit(0);
   } 
   
   printf("\nEnter %d elements into MATRIX-A: ", (m*n) );
   for(i=0; i < m; i++)    
      for(j=0; j < n; j++)
         scanf("%d",&A[i][j]); 

   printf("\nEnter %d elements into MATRIX-B: ", (p*q) );
   for(i=0; i < p; i++)    
      for(j=0; j < q; j++)
         scanf("%d",&B[i][j]); 

   //Addition and Subtraction of two matrices together
   for(i=0; i < p; i++)    
      for(j=0; j < q; j++)
      {
          S[i][j] = A[i][j] + B[i][j]; 
          D[i][j] = A[i][j] - B[i][j]; 
      }
   
   printf("\nElements of MATRIX-A:\n");
   for(i=0; i < m; i++)    
   {
      for(j=0; j < n; j++)
         printf("%d\t", A[i][j]); 
      
      printf("\n");
   }

   printf("\nElements of MATRIX-B:\n");
   for(i=0; i < p; i++)    
   {
      for(j=0; j < q; j++)
         printf("%d\t", B[i][j]); 
      
      printf("\n");
   }

   printf("\nAddition of Two MTRICES i.e. S(MxN):\n");
   for(i=0; i < m; i++)    
   {
      for(j=0; j < n; j++)
         printf("%d   ", S[i][j]); 
      
      printf("\n");
   }

   printf("\nSubtraction/Diff. between Two MATRICES i.e. D(MxN):\n");
   for(i=0; i < p; i++)    
   {
      for(j=0; j < q; j++)
         printf("%d   ", D[i][j]); 
      
      printf("\n");
   }
   return 0;
}