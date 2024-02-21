//Practice using loops (while, do-while, for) to print all 10 patterns (triangles, squares, etc.).
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of line: ");
    scanf("%d",&n);
    for(int i=n;i>0;i--)
    {
        for(int j=n-i;j>0;j--)
            printf(" ");
        for(int j=i;j>0;j--)
            printf("*");
            printf("\n");
    }
    return 0;
}