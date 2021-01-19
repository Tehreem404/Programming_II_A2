#include <stdio.h>
#include <stdlib.h>
#include "Double_Array.h"

void randomize_array(struct Double_Array *rand_struct, double a, double b)
{
    double rand_num;
    int r, c;

    /* Goes through each value in the array and assigns a random value between two chosen integers */
    if (b >= a)
    {
        for (r = 0; r < rand_struct->rowsize; r++)
        {
            for (c = 0; c < rand_struct->colsize; c++)
            {
                rand_num = ((double)rand() / (double)RAND_MAX) * (b - a) + a;
                rand_struct->array[r][c] = rand_num;
            }
        }
    }

    if (b < a)
    {
        for (r = 0; r < rand_struct->rowsize; r++)
        {
            for (c = 0; c < rand_struct->colsize; c++)
            {
                rand_num = ((double)rand() / (double)RAND_MAX) * (a - b) + b;
                rand_struct->array[r][c] = rand_num;
            }
        }
    }
}
