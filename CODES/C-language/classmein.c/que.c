//write a program to print variable value using pointer,variable adress using pointer and pointer address by taking pointer and variable
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int *p;
    p=&n;
    printf("%d\n",*p);
    printf("%d\n",&*p);
    printf("%d\n",&p);
    return 0;
}
