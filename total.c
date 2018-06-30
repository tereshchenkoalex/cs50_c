#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int total = 0;
    for (int i = 0; i < 5; i++)
    {
        total = 1 + total;
    }
    printf("%d\n", total);
}
