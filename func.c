#include <stdio.h>
#include <math.h>
#include "func.h"

int solve_heigh(int s)
{
    int discriminant = sqrt(1 + 8 * s);
    return (1 + discriminant)/2;
}

void print_array(int* array, int heigh)
{
    int index = 0;
    for (int line_number = 0; line_number < heigh; line_number++)
    {
       for (int index_in_line = 0; index_in_line < line_number; index_in_line++)
       {
        printf("%2d ", array[index]);
        index++;
       }
       printf("\n");
    }
    
}
