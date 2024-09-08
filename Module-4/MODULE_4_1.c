// Write a program to read data from file. 
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file;
    char line[256];

    file = fopen("data.txt", "r");
    if (file == NULL)
    {
        printf("Error: Could not open file!\n");
        return 1;
    }
    while (fgets(line, sizeof(line), file))
    {
        printf("%s", line);
    }
    fclose(file);
}
