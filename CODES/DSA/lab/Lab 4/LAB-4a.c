//Write a C program to implement Stack operations using Array.
#include <stdio.h>
int TOP=-1;
int main() 
{
    int n,x;
    printf("Enter the size of stack: ");
    scanf("%d",&n);
    int stack[n];
    {
        printf("Enter the Element");
        scanf("%d",&x);
        if(TOP==n-1)
            {
                printf("no space for-%d Stack is full,overflow condition",x);
            }
        else
            {
                TOP+=1;
                stack[TOP]=x;
            }
    }
    printf("\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",stack[i]);
    }
    return 0;
}
