#include <stdio.h>
#include <cs50.h>

bool search(int value, int values[], int n)
{
  // Встановити значення верхньої і нижньої межі пошуку
  int lower = 0;
  int upper = n - 1;
  
  while(lower <= upper)
  {
    // Знайти середину
    int middle = (upper + lower) / 2;
    
    //Порівняти значення в середині з шуканим
    if(values[middle] == value)
    {
      return true;
    }
    else if (value[middle] < value)
    {
      lower = middle + 1;
    }
    else if (value[middle] > value)
    {
      upper = middle - 1;
    }
  }
  
  return false;
}
