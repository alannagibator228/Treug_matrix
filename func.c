#include <stdio.h>
#include <math.h>
#include "func.h"

int solve_heigh(int s)
{
    int discriminant = sqrt(1 - 4 * s);
    return (1 + discriminant)/2;
}
/*
void print_array(int* array, int heigh)
{
    for (int i = 0; i < heigh; i++)
    {
       
    }
    
}
*/