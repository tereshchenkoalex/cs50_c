#include <cs50.h>
#include <stdio.h>

#define N 10

int main(int argc, char *argv[])
{
    int *x = malloc(sizeof(int) * N);

    for (int i = 0; i< N; i++)
    {
        x[i] = i * 2;
    }
    
    for (int i = 0; i < N; i++)
    {
        printf("Element %d: %d\n", i, x[i]);
    }
}
