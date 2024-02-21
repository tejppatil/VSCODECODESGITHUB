//Write a function to find the maximum of three numbers
#include<stdio.h>
int maximum(int n1,int n2,int n3)
{
    if(n2<n1)
    {
        if(n3<n1)
            return n1;
    }
    else if(n1<n2)
    {
        if(n3<n2)
            return n2;
    }
    else if(n1<n3)
    {
        if(n2<n3)
            return n3;
    }
}
int main()
{
    int n1,n2,n3;
    printf("Enter the number 1: ");
    scanf("%d",&n1);
    printf("Enter the number 2: ");
    scanf("%d",&n2);
    printf("Enter the number 3: ");
    scanf("%d",&n3);
    printf("The numbers given by you are %d,%d,%d\n",n1,n2,n3);
    printf("The maximum of these numbers is %d.",maximum(n1,n2,n3));
    return 0;
}
