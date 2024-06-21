#include <stdio.h>
#include <stdlib.h>
int linear_search(int a[], int size, int x);
int main()
{
    int size;
    printf("\nEnter the Size of Array: ");
    scanf("%d", &size);
    int array[size];
    printf("\nEnter the Elements of Array are:\n");
    for (int i = 0; i < size; i++)
    {
        printf("Element %d: ", i);
        scanf("%d", &array[i]);
    }
    printf("\nEnter the element to be searched using Linear Search: ");
    int element;
    scanf("%d", &element);
    int index = linear_search(array, size, element);
    if (index == -1)
    {
        printf("%d is not present in the Array.\n", element);
    }
    else
    {
        printf("%d is present at the Index %d in the Array.\n", element, index);
    }
    return 0;
}
int linear_search(int a[], int size, int x)
{
    for (int i = 0; i < size; i++)
    {
        if (a[i] == x)
        {
            return i;
        }
        else
        {
            return -1;
        }
    }
}
