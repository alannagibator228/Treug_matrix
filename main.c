#include <stdio.h>
#include "func.h"

int main()
{
    int arr[] = 
    {
        1,
        2,   3,
        4,   5,  6,
        7,   8,  9, 10,
        11, 12, 13, 14, 15,
        16, 17, 18, 19, 20, 21,
        22, 23, 24, 25, 26, 27, 28
    };

    int size = sizeof(arr)/sizeof(arr[0]);
    int heigh = solve_heigh(size);
    print_array(arr, heigh);
}