//Develop a program to check if two strings are anagrams of each other.
#include <stdio.h>
#include <string.h>

int main() 
{
    char s1[20], s2[20];
    int l, l1, l2, i, j,f1= 0,f2= 0;
    printf("Enter first string: ");
    scanf("%s", s1);  
    printf("Enter second string: ");
    scanf("%s", s2); 
    l1 = strlen(s1);
    l2 = strlen(s2);
    if (l1==l2) 
    {
        l = l1;
        for (i=0;i<l;i++) 
        {
            for(j=0;j<l;j++) 
            {
                if(s1[i]==s2[j]) 
                {
                    f1=1;
                    break;
                }
            }
            if(f1==0) 
            {
                f2=1;
                break;
            }
        }
        if (f2==1)
            printf("\nStrings are not Anagram");
        else
            printf("\nStrings are Anagram");
    } 
    else
        printf("BOth strings must have equal no.of characters");
    return 0;
    
}
