//Practice using loops (while, do-while, for) to print all 10 patterns (triangles, squares, etc.).
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number(in multiples of 2) of line: ");
    scanf("%d",&n);
    for(int i=n/2;i>=1;i--)
    {
        for(int j=n-i;j>=1;j--)
            printf(" ");
        for(int j=i;j>=1;j--)
            printf("* ");
            printf("\n");
    }
    for(int i=1;i<=n/2;i++)
    {
        for(int j=1;j<=n-i;j++)
            printf(" ");
        for(int j=1;j<=i;j++)
            printf("* ");
            printf("\n");
    }
    return 0;
}