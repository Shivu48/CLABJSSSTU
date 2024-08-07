* To find the TRACE and NORM of a given matrix A (M x N) by checking the compatibility and print both input & output matrices 
   with suitable headings. Use user-defined functions to find their TRACE and NORM. */
/*

/* Write a C program to read a matrix A (M x M), find the TRACE and NORM of the matrix and output the input matrix, trace and norm.
   Use user-defined functions to find their TRACE and NORM. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 5

void trace_matrix(int [MAX][MAX], int);
float norm_matrix(int [MAX][MAX], int, int);

int A[MAX][MAX], i, j, m, n, trace = 0, sum = 0;
float norm=0;

int main()
{  
   system("clear");
   rep:
   printf("\nEnter the Size/Order/Dim. of the Matrix-A: ");
   scanf("%d %d",&m, &n); 
   
   if(m!=n)
   {
      printf("\nOrder of the Matrix-A must be Sqr. Matrix i.e. M = N...");
      goto rep;
   }
   
   printf("\nInput %d elements into MATRIX-A: ", (m*n) );
   for(i=0; i < m; i++)    
      for(j=0; j < n; j++)
         scanf("%d",&A[i][j]); 
   
   printf("\nElements of MATRIX-A:\n");
   for(i=0; i < m; i++)    
   {
      for(j=0; j < n; j++)
         printf("%d   ",A[i][j]); 
      
      printf("\n");
   }   
   
   //Trace of a Matrix
   trace_matrix(A, n); 
   printf("\nTrace is %d \n", trace);

   //Norm of a Matrix
   norm = norm_matrix(A, m, n);     
   printf("\nNORM is %f \n", norm);
   
   return 0;
}
//User-defined functions
void trace_matrix(int A[MAX][MAX], int n)
{
   for(i=0; i < n; i++)    
      trace += A[i][i]; 
}

float norm_matrix(int A[MAX][MAX], int m, int n)
{
   for (i = 0; i < m; ++i) 
      for (j = 0; j < n; ++j)
         sum += pow(A[i][j],2);
      
   norm = sqrt(sum);
   
   return norm;
}

/*
Output:

Enter the Size/Order/Dim. of the Matrix-A: 2 2
Input 4 elements into MATRIX-A: 1 2 3 4
Elements of MATRIX-A:
1   2   
3   4   
Trace is 5 
NORM is 5.477226 

Enter the Size/Order/Dim. of the Matrix-A: 3 3
Input 9 elements into MATRIX-A: 1 2 3 4 5 6 7 8 9
Elements of MATRIX-A:
1   2   3   
4   5   6   
7   8   9   
Trace is 15 
NORM is 16.881943 

Enter the Size/Order/Dim. of the Matrix-A: 3 4

Order of the Matrix-A must be Sqr. Matrix i.e. M = N...
Enter the Size/Order/Dim. of the Matrix-A: