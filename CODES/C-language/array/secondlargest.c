//Write a program to find the second largest element in an array.
#include <stdio.h>
int main() 
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    if (n<=1) 
    {
        printf("Array should have at least two elements.\n");
        return 1;
    }
    int a[n];
    printf("Enter %d elements of the array:\n", n);
    for (int i=0;i<n;i++) 
    {
        scanf("%d", &a[i]);
    }
    printf("[");
    for(int i=0;i<n-1;i++)
    {
        printf("%d, ",a[i]);
    }
    for(int i=n-1;i<n;i++)
    {
        printf("%d",a[i]);
    }
    printf("]");
    printf("\n");
    // Find the second largest element
    int largest = a[0];
    int secondLargest = a[1];
    if (largest < secondLargest) 
    {
        int temp = largest;
        largest = secondLargest;
        secondLargest = temp;
    }
    for (int i = 2; i < n; i++) 
    {
        if (a[i] > largest) 
        {
            secondLargest = largest;
            largest = a[i];
        } else if (a[i] > secondLargest && a[i] != largest) 
        {
            secondLargest = a[i];
        }
    }
    printf("The second largest element is: %d\n", secondLargest);
    return 0;
}
