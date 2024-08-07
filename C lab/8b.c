/* To input N integer numbers in ascending order into a single dimension array, and then to perform “BINARY SEARCH” for 
   a given Key integer number and report success or failure in the form of a suitable message. */

/* Design, develop and execute a program in C to input N integer numbers in ascending order into a single dimension array, 
   and then to perform a BINARY SEARCH for a given key integer number and report success or failure in the form of 
   a suitable message. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[10], i, j, key, n, top, bot, mid, temp;
    
    system("clear");
    printf("\nEnter the Size of an Array-A: "); scanf("%d",&n); 
    
    printf("\nEnter %d numbers into Array-A in Ascending Order ONLY: ", n);
    for(i=0; i < n; i++)
       scanf("%d",&A[i]); 

    printf("\nEnter the Key Element to be Searched in Array-A: ");
    scanf("%d",&key); 

    //BINARY SEARCH Algorithm/Technique
    top = 0; bot = n-1; 
    while(top<=bot)
    {
        mid = (top+bot) / 2 ;
        if(key==A[mid])
        {
            printf("\nSearch Passed...%d is exist in the Array-A at position %d\n", A[mid], mid+1);
	   exit(0);  
        }
        if(key>A[mid])        
           top = mid + 1;
        else
           bot = mid - 1;       
    }

    printf("\n!!!Search Failed...%d does NOT exist in the Array-A", key);
    printf("\n");
    return 0;
}