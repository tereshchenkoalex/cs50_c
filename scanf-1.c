#include <stdio.h>

int main()
{
    char* buffer;
    printf("Number, please: ");
    scanf("%s", buffer);
    printf("Thanks for the %i!\n", buffer);
}
