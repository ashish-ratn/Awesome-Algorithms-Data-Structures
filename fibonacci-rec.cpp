/*C program to print fibonacii series till N terms.*/
 
#include <stdio.h>
 
//function to print fibonacii series
void getFibonacii(int a,int b, int n)
{   
    int sum;
    if(n>0)
    {
        sum=a+b;
        printf("%d ",sum);
        a=b;
        b=sum;
        getFibonacii(a,b,n-1);
    }
}
int main()
{
    int a,b,sum,n;
    int i;
     
    a=0;        //first term
    b=1;        //second term
     
    printf("Enter total number of terms: ");
    scanf("%d",&n);
     
    printf("Fibonacii series is : ");
    //print a and b as first and second terms of series
    printf("%d\t%d\t",a,b);
    //call function with (n-2) terms
    getFibonacii(a,b,n-2);
    printf("\n");   
    return 0;
}
