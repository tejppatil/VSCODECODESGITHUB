//Write a C program to implement DMA(Dynamic memory allocation) using malloc or calloc function.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i,*ptr,sum=0;
    printf("Enter the number of the elements: ");
    scanf("%d",&n);
    ptr = (int*) malloc (n* sizeof(int));
    if(ptr == NULL)
    {
        printf("memory not allocated");
        exit(0);
    }
    printf("Enter elements: ");
    for(i=0;i<n;++i)
    {
        scanf("%d", ptr+i);
        sum =sum + *(ptr+i);
    }
    printf("Sum = %d\n", sum);
    // deallocating the memory
    free(ptr);
    {
        int n, i, *ptr, sum = 0;
        printf("Enter number of elements: ");
        scanf("%d", &n);
        ptr = (int*) malloc(n * sizeof(int));
        // if memory cannot be allocated
        if(ptr == NULL)
        {
            printf("Error! memory not allocated.");
            exit(0);
        }
        printf("Enter elements: ");
        for(i = 0; i < n; ++i)
        {
            scanf("%d", ptr + i);
            sum = sum + *(ptr + i);
        }
        printf("Sum = %d", sum);
        // deallocating the memory
        free(ptr);
    }
    return 0;
}