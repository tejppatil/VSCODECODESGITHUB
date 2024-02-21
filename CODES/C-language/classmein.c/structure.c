//Write a c program to display employee iformation (id,name,department )using structures
#include<stdio.h>
struct employee
{
    int id;
    char name[50];
    char department[50];
};
int main()
{
    struct employee e1={2003,"Harry","Analyst"};
    struct employee e2={2007,"Varren","Research"};
    struct employee e3={2017,"Aura","Maintainance"};

    printf("id-%d having name %s for %s\n",e1.id,e1.name,e1.department);
    printf("id-%d having name %s for %s\n",e2.id,e2.name,e2.department);
    printf("id-%d having name %s for %s\n",e3.id,e3.name,e3.department);
    return 0;
}