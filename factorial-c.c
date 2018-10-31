/*C program to find factorial of a number using recursion.*/
 
#include <stdio.h>
 
//function for factorial
long int factorial(int n)
{   
    if(n==1)    return 1;
    return n*factorial(n-1);
}
int main()
{
    int num;
    long int fact=0;
     
    printf("Enter an integer number: ");
    scanf("%d",&num);
     
    fact=factorial(num);
    printf("Factorial of %d is = %ld",num,fact);
    printf("\n");   
    return 0;
}
