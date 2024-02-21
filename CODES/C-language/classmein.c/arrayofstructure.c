//in array we have 
//in structures we have members
//write a c program to find weight of all passengers in the car....
#include<stdio.h>
struct car
{
    char name[50];
    int weight;
};
int main()
{
    int w=0,i;
    struct car c[4];
    for(i=0;i<4;i++)
    {
        scanf("%s",c[i].name);
        scanf("%d",&c[i].weight);
    }
    for(i=0;i<4;i++)
    {
        w=w+c[i].weight;
    }
    printf("%d",w);
    return 0;

}