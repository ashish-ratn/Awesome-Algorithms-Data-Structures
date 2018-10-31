/*C program to calculate power of any number using recursion*/

#include <stdio.h>

//function for calculating power
long int getPower(int b,int p)
{
    long int result=1;
    if(p==0) return result;
    result=b*(getPower(b,p-1));  //call function again
}
int main()
{
    int base,power;
    long int result;
    
    printf("Enter value of base: ");
    scanf("%d",&base);
    
    printf("Enter value of power: ");
    scanf("%d",&power);
    
    result=getPower(base,power);
    
    printf("%d to the power of %d is: %ld\n",base,power,result);
    
    return 0;
}
 
