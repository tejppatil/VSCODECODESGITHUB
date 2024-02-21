//Implement functions to swap values using pointers and without using pointers
#include <stdio.h>
int swap(int *x, int *y) 
{
    int t = *x;
    *x = *y;
    *y = t;
}
int main()
{
    printf("By Using Pointers:-\n");
    int a = 10, b = 20;
    printf("Before swap: a=%d, b=%d\n",a,b);
    swap(&a, &b);
    printf("After swap: a=%d, b=%d\n", a,b);
    printf("\nBy Not Using Pointer:-\n");
    printf("Before swap: a=%d, b=%d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swap: a=%d, b=%d\n", a, b);
    return 0;
}
 