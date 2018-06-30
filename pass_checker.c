#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    printf("Please, enter the password to achieve important information. Because only Chosen One can guess the password!!!\n");
    char* info = ("So, this important information is now shown to you. Congratulations!\n");
    char* password = ("qwerty");
    char* input = GetString();   
    
if (input != NULL && password != NULL)
{
        if (strcmp(input, password) == 0)
        {
            printf("%s\n", info);
        }
        else
        {
            printf("Passwords aren't matching. Inquisition has been called!\n");
        }
} 
}
