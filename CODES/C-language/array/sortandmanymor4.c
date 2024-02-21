//Write programs to manipulate arrays (sorting, searching, insertion, deletion).
#include <stdio.h>

void deleteElement(int a[], int *size, int position) 
{
    if (position<0||position>=*size) 
    {
        printf("Invalid position for deletion.\n");
        return;
    }
    printf("Deleted value:%d\n",a[position]);
    for (int i=position;i<*size-1;i++)
    {
        a[i]=a[i+1];
    }
    (*size)--;
}
int main() 
{
    int maxSize=10;
    int array[maxSize];
    int size=0;
    printf("Enter the size of the array (max %d): ", maxSize);
    scanf("%d", &size);
    printf("Enter %d elements for the array:\n", size);
    for (int i=0;i<size;i++) 
    {
        scanf("%d",&array[i]);
    }
    printf("Original Array: ");
    for (int i=0;i<size;i++) 
    {
        printf("%d ",array[i]);
    }
    int deletePosition;
    printf("\nEnter the position to delete(position is from 0): ");
    scanf("%d", &deletePosition);
    deleteElement(array,&size,deletePosition);
    printf("Array after deletion at position %d: ", deletePosition);
    for (int i=0;i<size;i++) 
    {
        printf("%d ", array[i]);
    }
 return 0;
}

