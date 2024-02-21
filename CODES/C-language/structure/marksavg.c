//Develop a program to calculate the total marks and average marks of students using structures.
#include<stdio.h>
struct marks
{
    int total;
    float avg;
};
int main()
{
    int n,i;
    struct marks classtotal={0, 0};
    printf("Enter the number of students: ");
    scanf("%d",&n);
    int m[n];
    for(i=0;i<n;i++)
    {
        printf("\nEnter the marks of %d student: ",i+1);
        scanf("%d",&m[i]);
        classtotal.total=classtotal.total+m[i];
    }
    classtotal.avg=classtotal.total/(float)n;
    printf("The total marks of all student is %d\n",classtotal.total);
    printf("The avg marks of all students is %.2f",classtotal.avg);
    return 0;
}