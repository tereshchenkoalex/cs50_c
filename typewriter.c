#include <cs50.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(int argc, char* argv[])
{
    if (argc != 2)
    {
        printf("Usage: %s [name of document]\n", argv[0]);
        return 1;
    }
    
    FILE* fp = fopen(argv[1], "w");
    
    if (fp == NULL)
    {
        printf("Could not create %s\n", argv[1]);
        return 2;
    }
    
    while (true)
    {
        printf("Enter a new line of text (or \"quit\"):\n");
        string input = GetString();
        
        if (input != NULL && strcmp(input, "quit") == 0)
        {
            free(input);
            break;
        }
        
        else if (input != NULL)
        {
            fputs(input, fp);
            fputs("\n", fp);
            printf("Done, Master!\n\n");
            free(input);
        }
    }
    fclose(fp);
    return 0;
}
