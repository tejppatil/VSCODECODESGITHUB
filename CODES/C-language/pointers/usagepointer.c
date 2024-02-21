//Write programs to demonstrate the usage of pointers (pointer arithmetic, passing pointers to functions).
#include <stdio.h>
int doubleArray(int *a, int n) 
{
    for (int i=0;i<n;i++) 
    {
        *(a+i)*=2;
    }
}
int main() 
{
    printf("For Pointer Arithmetic..\n");
    int numbers[] = {1, 2, 3, 4, 5};
    int *ptr = numbers;

    printf("Original array: ");
    for (int i = 0; i < 5; i++) 
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    printf("Array elements using pointers: ");
    for (int i = 0; i < 5; i++) 
    {
        printf("%d ", *(ptr + i));
    }
    printf("\n\n");
    printf("For Pointer Passing to array...\n");
     int number[] = {1, 2, 3, 4, 5};
    int n = sizeof(numbers) / sizeof(number[0]);

    printf("Original array: ");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", number[i]);
    }
    printf("\n");
    doubleArray(number, n);
    printf("Array after doubling elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", number[i]);
    }
    printf("\n");
}
