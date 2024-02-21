//Write a c program where a positive integer is entered through the keyboard and print the binary equivalent of this number using recursion.
#include <stdio.h>
void d(int n) 
{
    if (n > 0) 
    {
        d(n/2);
        printf("%d", n % 2);
    }
}

int main() 
{
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) 
    {
        printf("Please enter a positive integer.\n");
        return 1;
    }
    printf("Binary equivalent: ");
    if (num == 0) 
    {
        printf("0");
    } 
    else 
    {
        d(num);
    }
    return 0;
}
