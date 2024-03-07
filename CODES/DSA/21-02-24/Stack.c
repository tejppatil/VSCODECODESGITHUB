//program to create a stack and enter elements untill it overflows
#include <stdio.h>
int top=-1;
void push(int s[],int n)
{
    if(top=n-1)
    {
        printf("Stack overflow>>");
    }
    else
    {
        printf("Enter the element: ");
        scanf("%d",&s[n]);
        top++;
    }
}
void pop(int s[],int n)
{
    if(top=-1)
    {
        printf("Stack underflow>>>");
    }
    else
    {
        printf("Popped element is %d",top);
        top--;
    }

}
int main() 
{
    int n,x;
    printf("Enter the size of stack: ");
    scanf("%d",&n);
    int stack[n];
    do
    {
        printf("Enter the choice:\n1)For push Operation\n2)For pop Operation\n3)For peep Operation\n4)For display Operation\n0)For Exit ");
        scanf("%d",&x);
         switch(x)
    {
        case 0:
            printf("Exited the program>>");
        case 1:
            push(stack[n]);
            break;
        case 2:
            pop(stack[n]);
            break;
        case 3:
            peep(stack[n]);
            break;
        case 4:
            disp(stack[n]);
            break;
        default:
            printf("Wrong choice entered \nProgram exited>>");
            break;
    }
    } while (x!=0)
    
   
    return 0;
}
