//program to create a stack and enter elements untill it overflows
#include <stdio.h>
#include<conio.h>
#define n 5
int stack[n],top=-1;
void push()
{
    int x;
    printf("Enter the element: \n");
    scanf("%d",&x);
    if(top==n-1)
    {
        printf("Stack overflow>>\n");
    }
    else
    {
        top=top+1;
        stack[top]=x;
    }
}
void pop()
{
    if(top==-1)
    {
        printf("Stack underflow>>>\n");
    }
    else
    {
        printf("Popped element is %d\n",stack[top]);
        top=top-1;
    }
}
void peep()
{
     if(top==-1)
    {
        printf("Stack underflow>>>\n");
    }
    else
    {
        printf("Element is %d\n",stack[top]);
    }
}
void disp()
{
    if(top==-1)
    {
        printf("Stack underflow>>>\n");
    }
    else
    {
        printf("Element are: ");
        for(int i=top;i>=0;i--)
        {
            printf("%d ",stack[i]);
        }
        printf("\n");
    }
}
int main() 
{
    int x;
    do
    {
        printf("Enter the choice:\n1)For push Operation\n2)For pop Operation\n3)For peep Operation\n4)For display Operation\n0)For Exit \n");
        scanf("%d",&x);
         switch(x)
    {
        case 0:
            printf("Exited the program>>\n");
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peep();
            break;
        case 4:
            disp();
            break;
        default:
            printf("Wrong choice entered \nProgram exited>>\n");
            break;
    }
    } while (x!=0);
    getch();
}
