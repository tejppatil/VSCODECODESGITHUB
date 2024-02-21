//Implement programs for string reversal
#include <stdio.h>
#include <string.h>
int revs(char *s) 
{
    int length = strlen(s);
    for (int i=0,j=length-1;i<j;i++,j--) 
    {
        char temp=s[i];
        s[i]=s[j];
        s[j]=temp;
    }
}
int main() 
{
    char s[100];
    printf("Enter a string: ");
    scanf("%s", s);
    revs(s);
    printf("Reversed string: %s\n", s);
    return 0;
}
