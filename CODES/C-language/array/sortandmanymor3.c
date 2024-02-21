//Write programs to manipulate arrays (sorting, searching, insertion, deletion).
#include <stdio.h>
int insert(int a[],int *size,int position,int element) 
{
    for (int i=*size-1;i>=position;i--) 
    {
        a[i+1]=a[i];
    }
    a[position]=element;
    (*size)++;
}
int main() 
{
    int maxSize = 10;
    int array[maxSize];
    int size = 0;
    printf("Enter the size of the array (max %d): ", maxSize);
    scanf("%d", &size);
    printf("Enter %d elements for the array:\n", size);
    for (int i=0;i<size;i++) 
    {
        scanf("%d", &array[i]);
    }
    printf("Original Array: ");
    for (int i=0;i<size;i++)
    {
        printf("%d ",array[i]);
    }
    int newPosition, newElement;
    printf("\nEnter the position to insert(element no. starts from 0): ");
    scanf("%d", &newPosition);
    printf("Enter the element to insert: ");
    scanf("%d", &newElement);
    if (newPosition>=0 && newPosition<=size) 
    {
        insert(array,&size,newPosition,newElement);
        printf("Array after insertion at position %d: ", newPosition);
        for (int i=0;i<size;i++) 
        {
            printf("%d ",array[i]);
        }
    } 
    else 
    {
        printf("Invalid position for insertion.\n");
    }
    return 0;
}
