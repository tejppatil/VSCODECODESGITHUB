//Create programs to read from and write to files.
#include <stdio.h>
int main() 
{
    FILE *file;
    char userInput[100];
    printf("Enter some text: ");
    fgets(userInput, sizeof(userInput), stdin);
    file = fopen("user_input.txt", "w");
    if (file == NULL) 
    {
        printf("Could not open the file for writing.\n");
        return 1;
    }
    fprintf(file, "File have:- %s", userInput);
    fclose(file);
    printf("User input written to the file successfully.\n");
    char content[100];
    file = fopen("user_input.txt", "r");
    if (file == NULL) 
    {
        printf("Could not open the file for reading.\n");
        return 1;
    }
    while (fgets(content,sizeof(content),file) != NULL) //for reading whats in file...
    {
        printf("%s", content);
    }
    fclose(file);
    return 0;
}
