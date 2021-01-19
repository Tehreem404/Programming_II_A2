#include <stdio.h>
#include <stdlib.h>
#include "Double_Array.h"

int swap_columns(struct Double_Array *rand_struct, int a, int b)
{
    int r;

    /* Takes in chosen column swap numbers and swaps their location using a buffer (temp) */
    /* Also checks if column does not exist */
    /* [Q1b] The faster approach cannot be applied here because you cant define a column by a single pointer.
    In memory, columns are not stored as arrays (the way rows are). Because rows are stored as arrays,
    they are defined by a pointer. */
    if (a <= rand_struct->colsize && b <= rand_struct->colsize)
    {
        for (r = 0; r < rand_struct->rowsize; r++)
        {
            double temp;
            temp = rand_struct->array[r][a];
            rand_struct->array[r][a] = rand_struct->array[r][b];
            rand_struct->array[r][b] = temp;
        }
        return (1);
    }
    else
    {
        printf("The column number selected to swap does not exist\n");
        return (0);
    }
}
