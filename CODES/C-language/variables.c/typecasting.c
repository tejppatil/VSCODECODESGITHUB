
#include <stdio.h>

int main() 
{
    char x1,y1;
    x1='A';
    int x,y;
    x=68.56;
    y=45.67;
    float x2,y2;
    x2=2.3;
    y1=x;
    y2=y;
    y=x1;
    x=x2;
    x1=y;
    printf("Typecasted value of x is %d\n",x);
    printf("Typecasted value of y is %d\n",y);
    printf("Typecasted value of x1 is %c\n",x1);
    printf("Typecasted value of y1 is %c\n",y1);
    printf("Typecasted value of x2 is %f\n",x2);
    printf("Typecasted value of y2 is %f\n",y2);
    return 0;
}
