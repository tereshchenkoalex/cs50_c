#include <stdio.h>

int main(void)
{
    printf("Now capital letters:\n");
    for (int i = 65; i < 65 + 26; i++)
    {
        printf("%i is %c\n", i, (char) i);
    }
}
