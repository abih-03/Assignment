// Write a program to read and write data from the file.  
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file;
    char text[100];

    file = fopen("example.txt", "w");
    if (file == NULL)
    {
        printf("Error opening file for writing!\n");
        return 1;
    }
    printf("Enter some text to write to the file: ");
    fgets(text, sizeof(text), stdin);
    fprintf(file, "%s", text);
    fclose(file);
    printf("Data written to file successfully.\n");

    file = fopen("example.txt", "r");
    if (file == NULL)
    {
        printf("Error opening file for reading!\n");
        return 1;
    }
    printf("\nReading from file:\n");
    while (fgets(text, sizeof(text), file) != NULL)
    {
        printf("%s", text);
    }
    fclose(file);
}
