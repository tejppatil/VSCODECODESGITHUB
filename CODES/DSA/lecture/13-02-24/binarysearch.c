//Code for the binary search
#include <stdio.h>
int binarySearch(int array[], int low, int high, int x)
{
  if (high >= low) {
    int mid = low + (high - low) / 2;
    // If found at mid, then return it
    if (array[mid] == x)
      return mid;
    // Search the left half
    if (array[mid] > x)
      return binarySearch(array,  low, mid - 1,x);
    // Search the right half
    return binarySearch(array, mid + 1, high, x);
  }
  return -1;
}
int main() 
{
    int size,ele;
    printf("Enter the size of an array:");
    scanf("%d",&size);
    printf("Enter the elemnt that you need to find in an array:");
    scanf("%d",&ele);
    printf("Enter the elemnets in an array:");
    int arr[size];
    for(int i=0;i<=size-1;i++)
    {
        scanf("%d",&arr[i]);
    }
    int result = binarySearch(arr, 0,size - 1, ele);
    (result == -1) ? printf("Element is not present in array")
                   : printf("Element is present at index %d",result);
    return 0;
}