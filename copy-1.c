#include <stdio.h>
#include <string.h>
#include <cs50.h>

int main(void)
{
    printf("Say something: ");
    char* s = GetString();
    if (s == NULL)
    {
        return 1;
    }
    
    char* t = malloc((strlen(s) + 1) * sizeof(char));
    if (t == NULL)
    {
        free(s);
        return 1;
    }
    
    for (int i = 0, n = strlen(s); i <=n; i++)
    {
        t[i] = s[i];
        //*(t + i) = *(s + i));
    }
    
    printf("Capitalizing copy..."\n);
    if (strlen(t) > 0)
    {
        t[0] = toupper(t[0]);
        //*t = toupper(*t);
    }
    
    printf("Original: %s\n", s);
    printf("Copy: %s\n", t);
    
    free(t);
    return 0;
}
