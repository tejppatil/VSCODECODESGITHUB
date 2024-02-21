//Implement recursive functions for Fibonacci series, factorial, and any other suitable problem.
#include<stdio.h>
int fibo(int a,int x,int y)
{
    int fib=0;
    x=0;y=1;
    for(int i=0;i<a;i++)
    {
        printf("%d\n",fib);
        x=y;
        y=fib;
        fib=x+y;
    }
}
int factorial(int b)
{
    for(int i=b-1;i>=1;i--)
    {
        b=b*i;
    }
    printf("%d",b);
}
int power(int c,int d)
{
    if(d==0)
    {
        return 1;
    }
    else if(c==0)
    {
        return 0;
    }
    else
    {
        return c*power(c,(d-1));
    }
}
int main()
{
    int n,a,b,c,d;
    printf("Press \n1 for Fibonacci\n2 for factorial\n3 for power calculation\n= ");
    scanf("%d",&n);

    switch(n)
    {
        case 1: printf("For Fibonacci Series: "); 
        int x,y,fib=0;
        printf("Enter the value: ");
        scanf("%d",&a);
        fibo(a,x,y);
        return 0;


        case 2:printf("For Factorial Value: ");
        printf("Enter the value: ");
        scanf("%d",&b);
        factorial(b);
        return 0;


        case 3:printf("For Power calculation: ");
        printf("Enter the number: ");
        scanf("%d",&c);
        printf("Enter the power: ");
        scanf("%d",&d);
        printf("%d",power(c,d));
        return 0;
    }
}
