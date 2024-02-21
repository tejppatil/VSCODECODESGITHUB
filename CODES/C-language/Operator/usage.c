//Write programs to demonstrate the usage of arithmetic, relational, logical, and bitwise operators
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the value of num1: ");
    scanf("%d",&a);
    printf("Enter the different value of num2: ");
    scanf("%d",&b);
    printf("a=%d,b=%d\n",a,b);

    //arithmetic operator  
    //unary
    printf("For Unary Arithmetic operator of a=%d\n",-a);
    printf("For Unary Arithmetic operator of b=%d\n",-b);
    //binary
    printf("Sum is a+b=%d\n",a+b);
    printf("Sub of a-b=%d\n",a-b);
    printf("Multiply of a*b=%d\n",a*b);
    printf("Remainder pf a/b=%d\n",a%b);

    //relational operator
    if(a>b)
        printf("\na is greater than b\n");
    else
        printf("\nb is greter than a\n");
    
    //logical operator
    int c=0,d=1;
    printf("\nc=%d,d=%d\n",c,d);
    printf("In logical operator 0=False and 1=True\n");
    printf("c&&d=%d\n",c&&d);
    printf("c||d=%d\n",c||d);
    printf("!c=%d\n",!c);

    //bitwise operator
    printf("\n%d\n", c&d ); 
    printf("%d\n", c|d); 
    printf("%d\n", c^d); 
    printf("%d\n", ~d); 
    printf("%d\n", d<<2); 
    return 0;
}