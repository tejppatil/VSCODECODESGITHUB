//program to create a stack and enter elements untill it overflows
#include <stdio.h>
int TOP=-1;
void push(int)
{

}
int main() 
{
    int n,x;
    printf("Enter the size of stack: ");
    scanf("%d",&n);
    int stack[n];
    printf("Enter the choice:\n1)For push Operation\n2)For pop Operation\n3)For peep Operation\n4)For display Operation");
    scanf("%d",&x);
    switch(x)
    {
        case 1:
            push;
            break;
        case 2:
            pop;
            break;
        case 3:
            peep;
            break;
        case 4:
            disp;
            break;
        default:
            printf("Wrong choice entered>>");
            break;
    }
    return 0;
}
