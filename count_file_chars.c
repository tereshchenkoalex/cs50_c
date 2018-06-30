#include <stdio.h>
#include <stdlib.h>

int count_file_chars(char* filename)
{
    FILE* thefile;
    char ch;
    int count = 0;
    
    thefile = fopen(filename, "r");
    if (thefile == NULL)
        return -1;
        
    while ((ch = fgetc(thefile)) != E0F)
        count++;
    
    fclose(thefile);
    
    return count;
}

int main(void)
