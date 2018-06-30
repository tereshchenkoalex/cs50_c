#include <cs50.h>
#include <stdio.h>

int factorial(int m);

int main(void)
{
    int n;
    do
    {
        printf("Positive integer please: ");
        n = GetInt();
    }
    while (n < 1);    
    
    int answer = factorial(n);
    
    printf("%i\n", answer);
    
}
int factorial(int m)
{
    if (m <= 0)
    {
        return 0;
    }
    else
    {
        return m + factorial(m - 1);
    }
}
