//Write programs to manipulate arrays (sorting, searching, insertion, deletion).
#include <stdio.h>
int Search(int a[], int n, int searched) 
{
    for (int i = 0; i < n; i++) 
    {
        if (a[i] == searched) 
        {
            return i;  
        }
    }
    return -1;  
}

int main() 
{
    int array[]={1,2,3,4,5,6,7,8,9,10};
    printf("The array is {1,2,3,4,5,6,7,8,9,10}\n");
    int size = sizeof(array) / sizeof(array[0]);
    int forsearch = 8;
    printf("From the array We are searching 8\n");

    int result = Search(array, size, forsearch);

    if (result != -1) 
    {
        printf("Target %d found at index %d\n", forsearch, result);
    } 
    else 
    {
        printf("Target %d not found in the array\n", forsearch);
    }

    return 0;
}
