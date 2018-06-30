#include <cs50.h>
#include <stdio.h>


int main(void)
{
    int x = 1;
    printf("x is equal to %d!\n", x);
    printf("Incrementing by 1...\n");
    x = increment(x);
    printf("Variable incremented!\n");
    printf("x is now %d!\n", x);
}

int
increment(int x)
{
    return x + 1;
}
