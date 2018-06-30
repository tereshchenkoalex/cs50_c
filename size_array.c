#include <stdio.h>
#include <cs50.h>

#define CLASS_SIZE 30

int main(void)
{
    int scores_array[CLASS_SIZE];

    for(int i = 0; i < CLASS_SIZE; i++)
    {
        printf("Enter score for student %d: ", i);
        scores_array[i] = GetInt();
    }
}
