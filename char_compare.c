#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main()
{
    char* s = GetString();
    char* t = GetString();
    
if (s != NULL && t != NULL)
{
    if (strcmp(s, t) == 0)
    {
        printf("You typed the same thing!\n");
    }
    else
    {
        printf("You typed different things!\n");
    }
}
} 
