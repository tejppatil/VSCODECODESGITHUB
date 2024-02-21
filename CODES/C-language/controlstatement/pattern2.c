//Practice using loops (while, do-while, for) to print all 10 patterns (triangles, squares, etc.).
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of line: ");
    scanf("%d",&n);
    for(int i=n;i>=1;i--)
    {
        for(int j=i;j>=1;j--)
            printf("*");
            printf("\n");
    }
    return 0;
}