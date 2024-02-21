//Create a program to take user input for their name and display a greeting message.
#include<stdio.h>
int main()
{
    char n[99];
    printf("Enter your name: ");
    scanf("%[^\n]s",&n);
    printf("hello %s",n);
}