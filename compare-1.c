#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    printf("Say something: ");
    char* s = GetString();
    
    printf("Say something: ");
    char* t = GetString();
    
    if (s != NULL && t != NULL)
    {
        if (strcmp(s, t) == 0)
        {
            printf("You types the same thing!\n");
        }
        else
        {
            printf("You types different things!\n");
        }
    }
}
