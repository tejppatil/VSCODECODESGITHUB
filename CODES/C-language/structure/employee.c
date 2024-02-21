//Create a program that stores employee information (name, ID, salary) and displays it using structures.
#include<stdio.h>
struct employee
{
    char name[50];
    int id;
    int salary;
};
int main()
{
    struct employee e1={"Harry",2303256,50000};
    struct employee e2={"Varren",2303789,86000};
    struct employee e3={"Aura",2303967,120000};

    printf("%s with id-no.%d have salary=%d\n",e1.name,e1.id,e1.salary);
    printf("%s with id-no.%d have salary=%d\n",e2.name,e2.id,e2.salary);
    printf("%s with id-no.%d have salary=%d\n",e3.name,e3.id,e3.salary);
    return 0;
}