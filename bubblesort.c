#include <stdio.h>
#include <cs50.h>
void swap(int array[], int i, int j);

int main()
{
    int numbers[] = {4, 3, 1, 2, -100500, 12, 44, -9, 23, 1,2, 1, 22};
    int n = sizeof(numbers) / sizeof(numbers[0]);
    for (int i = 0; i < n - 1; i++) {
        for (int j = n - 1; j > i; j--) {
            if (numbers[j] < numbers[j - 1]) {
                printf("Swapping %d\t and %d\n", numbers[j], numbers[j - 1]);
                swap(numbers, j, j - 1);
            }
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%d\n", numbers[i]);
    }
}

void swap(int array[], int i, int j)
{
    int temp_var = array[i];
    array[i] = array[j];
    array[j] = temp_var;
}
