//Implement a program that removes all occurrences of a specified character from a string.
#include <stdio.h>
int removeCharacter(char *s, char target) 
{
    int i, j;
    for (i=0,j=0;s[i]!=0; i++) 
    {
        if (s[i]!=target) 
        {
            s[j++]=s[i];
        }
    }
    s[j]=0;
}
int main() 
{
    char S[100];
    char targetC;
    printf("Enter a string: ");
    scanf("%[^\n]", S);
    printf("Enter the character to remove: ");
    scanf(" %c", &targetC);
    removeCharacter(S, targetC);
    printf("String after removing '%c': %s\n", targetC, S);

    return 0;
}
