//Create programs to perform string manipulation (concatenation, copying).
#include <stdio.h>
#include <string.h>
int main() 
{
    printf("For concatenation:>\n");
    char s1[50], s2[50];
    printf("Enter the first string: ");
    scanf("%s", s1);
    printf("Enter the second string: ");
    scanf("%s", s2);
    // Concatenate s2 to s1
    strcat(s1, s2);
    printf("Concatenated string: %s\n", s1);
    printf("For copying:>\n");
    printf("Taking second string to get copied in string 1:\n ");
    // Copy s2 to s1
    strcpy(s1, s2);
    printf("Copied string: %s\n", s1);
    return 0;
}

