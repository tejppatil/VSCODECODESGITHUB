//Implement a calculator program using switch-case statements.
#include<stdio.h>
int main()
{
    int a,b,n;
    for(n=1;n>=1;n++)
    {
        printf("Enter the value of Num 1: ");
        scanf("%d",&a);
        printf("Enter the value of Num 2: ");
        scanf("%d",&b);
        printf("Press\n1 for Add\n2 for Sub\n3 for Multiply\n4 for Div\n0 for exit\n=");
        scanf("%d",&n);
    if(n==0)
    {
        break;
    }
    switch(n)
    {case 1:printf("%d",a+b);
     break;
     case 2:printf("%d",a-b);
     break;
     case 3:printf("%d",a*b);
     break;
     case 4:printf("%d",a/b);
     break;
    }
    printf("\n\n");
    }
  return 0;
}