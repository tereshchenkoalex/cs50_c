        //int numbers_supreme[] = {numbers[divpoint + 1], numbers[divpoint + 2], numbers[divpoint + 3], numbers[divpoint + 4], numbers[divpoint + 5]};
        //printf("Array now is: %i, %i, %i, %i, %i\n", numbers_supreme[0],numbers_supreme[1], numbers_supreme[2], numbers_supreme[3], numbers_supreme[4]);
        //int size = sizeof(numbers_supreme) / sizeof(numbers_supreme[0]);
        //int divpoint = size / 2;
        //printf("Dividing continuing...%i\n", numbers_supreme[divpoint]);
        
        
        int size_right = size - divpoint - 1;
        //int size_right = (numbers[size - 1] - numbers[divpoint]);
        //int new_divnum = size_right / 2;
        int new_divnum = size - (size_right / 2);
        //int divpoint = numbers[new_divnum];
        //printf("Total size is: %i\n", size);
        //printf("Now size of the right part of the array is: %i\n", size_right);
        //printf("Now divpoint is: %i\n", new_divnum);
