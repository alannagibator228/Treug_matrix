#include <stdio.h>
#include <math.h>
#include "func.h"

int solve_heigh(int s)
{
    int discriminant = sqrt(1 + 8 * s);
    int h = (1 + discriminant)/2;
    return h;
}

void print_array(int* array, int heigh)
{
    int p = 0;
    for (int i = 0; i < heigh; i++)
    {
       for (int j = 0; j < i; j++)
       {
        printf("%2d ", array[p]);
        p++;
       }
       printf("\n");
    }
    
}
