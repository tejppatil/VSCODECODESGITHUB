//Practice declaring and initializing variables of different data types
#include<stdio.h>
int main()
{
    int a,b;
    a=10;
    b=15;

    float c,d;
    c=2.23;
    d=5.64;

    double e,f;
    e=4.46464;
    f=11.12812;

    char g;
    g='A';

    char h[]="Junguntsu Veer";

    printf("Integer variable\n a=%d\n b=%d\n",a,b);
    printf("Float Variable\n c=%f\n d=%f\n",c,d);
    printf("Double Variable\n e=%lf\n f=%lf\n");
    printf("Character Variable\n g=%c\n",g);
    printf("String Character Variable\n h[]=%s\n",h);
    return 0;
}