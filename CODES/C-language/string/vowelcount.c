//Write a program to count the number of vowels and consonants in a given string.
#include <stdio.h>
int main() 
{
    char s[100];
    int vowels=0,consonants=0;
    printf("Enter a string: ");
    scanf("%[^\n]", s);//to get the whole sentence even with thegaps in between...
    for (int i=0; s[i]!=0; i++) 
    {
        char currentChar = s[i];
    if (('a'<=currentChar) & (currentChar<='z'))
    {
        if ('A'<=currentChar)
        {
            if(currentChar<='Z')
            {
                currentChar=currentChar+32;//for the lowercase numbers.....
            }
        }
        if (currentChar=='a'||currentChar=='e'||currentChar=='i'||currentChar=='o'||currentChar=='u')
        {
            vowels++;
        }
        else
        {
            consonants++;
        }
    }
    }
    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);
    return 0;
}
