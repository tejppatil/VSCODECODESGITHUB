//write a c program to calculatee total no. of a team using structures,structure member are player name and run
//total no. of player given by user
#include<stdio.h>
struct team
{
    char player[50];
    int  run;
};
int main()
{
    int i,n,total=0;
    printf("Enter the total no of players: ");
    scanf("%d",&n);
    struct team c[n];
    for(i=1;i<=n;i++)
    {
        scanf("%s",c[i].player);
        scanf("%d",&c[i].run);
    }
    for(i=1;i<=n;i++)
        total=total+c[i].run;
    printf("%d",total);
    return 0;    
}