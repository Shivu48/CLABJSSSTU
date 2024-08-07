/*To simulates a simple calculator to perform the basic arithmetic operations 
   (Consider the operators +, -, x, / and % using „switch‟ statement) */

/* Write a program to simulate Simple calculator.
C program to design calculator with basic operations using 'switch' statement.

	1. Addition
	2. Subtraction
	3. Multiplication
	4. Division
	5. Modulo Division
*/
 
#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int num1, num2, choice=0;

    system("clear");
    printf("\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Modulo Division");
    printf("\nEnter Your Choice: "); scanf("%d", &choice);
    last: 
    printf("\nEnter Two Numbers to Perform the above Operation: ");
    scanf("%d %d",&num1, &num2);
    
    switch(choice)    
    {
        case 1: printf("Result: %d + %d = %d\n",num1, num2, (num1+num2)); break;
        case 2: printf("Result: %d - %d = %d\n",num1, num2, (num1-num2)); break;
        case 3: printf("Result: %d * %d = %d\n",num1, num2, (num1*num2)); break;
        case 5: printf("Result: %d MOD %d = %d\n",num1, num2, (num1%num2)); break;  
        case 4: if(num2!=0)
                     printf("Result: %d / %d = %.2f\n",num1, num2, ((float)num1/num2)); 
                  else
                     printf("!!!DIVIDE by ZERO...Error\n");
                break;
        default : printf("!!!Invalid Choice...\n");
    }
    return 0;
}