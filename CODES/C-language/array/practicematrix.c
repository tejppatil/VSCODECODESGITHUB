//Practice using multidimensional arrays for matrix operations
#include<stdio.h>
int main()
{
    printf("For Matrix Operation of 2 matrixes....\n");
    printf("For first Matrix:\n");
    int i,j,r,s;
    printf("Enter the maximum rows you want in matrix: ");
    scanf("%d",&i);
    printf("Enter the maximum columns you want in matrix: ");
    scanf("%d",&j);
    int a[i][j];
    for( r=0;r<i;r++)
    {
        for( s=0;s<j;s++)
        {
            printf("Enter the a[%d,%d] element: ",r,s);
            scanf("%d",&a[r][s]);
        }
    }
     printf("\nEntered 1st Matrix:\n");
    for ( r = 0; r < i; r++) 
    {
        for ( s = 0; s < j; s++) 
        {
            printf("%d\t", a[r][s]);
        }
        printf("\n");
    }
    printf("For secoond Matrix:\n");
    printf("Enter the maximum rows you want in matrix: ");
    scanf("%d",&i);
    printf("Enter the maximum columns you want in matrix: ");
    scanf("%d",&j);
    int b[i][j];
    for( r=0;r<i;r++)
    {
        for( s=0;s<j;s++)
        {
            printf("Enter the a[%d,%d] element: ",r,s);
            scanf("%d",&b[r][s]);
        }
    }
     printf("\nEntered 2nd Matrix:\n");
    for ( r = 0; r < i; r++) 
    {
        for ( s = 0; s < j; s++) 
        {
            printf("%d\t", b[r][s]);
        }
        printf("\n");
    }
    int result[r][s];
    printf("\nMatrix Addition (a + b):\n");
    for (int r = 0; r < i; r++) 
    {
        for (int s = 0; s < j; s++) 
        {
            result[r][s] = a[r][s] + b[r][s];
            printf("%d\t", result[r][s]);
        }
        printf("\n");
    }

    // Matrix subtraction
    printf("\nMatrix Subtraction (a - b):\n");
    for (int r = 0; r < i; r++) 
    {
        for (int s = 0; s < j; s++) 
        {
            result[r][s] = a[r][s] - b[r][s];
            printf("%d\t", result[r][s]);
        }
        printf("\n");
    }
    return 0;
}