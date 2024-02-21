//Create a program to generate the Fibonacci series up to a specified number of terms using a loop.
#include<stdio.h>
int main() 
{
    int n,fib=0,x=0,y=1;
    printf("Enter the value till you want fibbonacci series: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("%d\n",fib );
        x=y;
        y=fib;
        fib=x+y;
    }
    
    return 0;
}
