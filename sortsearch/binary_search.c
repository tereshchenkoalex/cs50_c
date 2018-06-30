#include <stdio.h>
#include <cs50.h>


int main(void)
{
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    int steps_counter = 0;
    printf("Please, enter an integer from 1 to 11: ");
    int requested_number = GetInt();
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int divpoint = size / 2;
    //int divpoint_control = divpoint;
    printf("Dividing continuing...%i\n", numbers[divpoint]);
    steps_counter = steps_counter + 1;
    
    if (requested_number == numbers[divpoint])
    {
        printf("So, requested number %i is really equal to this number %i\n", requested_number, numbers[divpoint]);
        printf("Steps counter: %i\n", steps_counter);
    }
    
    if (requested_number < numbers[divpoint])
    {
      do
        {
           size = divpoint;
           divpoint = size / 2;
           steps_counter++;
           printf("Dividing continuing...%i\n", numbers[divpoint]);
        }
      while (requested_number != numbers[divpoint]);
      printf("So, requested number %i is really equal to this number %i\n", requested_number, numbers[divpoint]);
      printf("Steps counter: %i\n", steps_counter);
    }
    
    if (requested_number > numbers[divpoint])
    {
        int size_right = size - divpoint - 1;
        int new_divnum = size - (size_right / 2);
        int divpoint = numbers[new_divnum] - 1;
        printf("Dividing continuing: %i\n", divpoint);
        steps_counter = steps_counter + 1;
        
            if (requested_number == numbers[divpoint] - 1)
        {
            printf("So, requested number %i is really equal to this number %i\n", requested_number, numbers[divpoint] - 1);
            printf("Steps counter: %i\n", steps_counter);
        }
        
        
            if (requested_number < numbers[divpoint])
            {
            do
            {
                size_right = divpoint;
                divpoint = size_right / 2;
                steps_counter++;
                printf("Dividing continuing...%i\n", numbers[divpoint]);
            }
            while (requested_number != numbers[divpoint]);
            printf("So, requested number %i is really equal to this number %i\n", requested_number, numbers[divpoint]);
            printf("Steps counter: %i\n", steps_counter);
            }
          
    }
}
