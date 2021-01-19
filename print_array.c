#include <stdio.h>
#include <stdlib.h>
#include "Double_Array.h"

void print_array(struct Double_Array *rand_struct)
{
    int r, c;

    /* Prints array in */
    for (r = 0; r < rand_struct->rowsize; r++)
    {
        for (c = 0; c < rand_struct->colsize; c++)
        {
            printf("%0.1f\t", rand_struct->array[r][c]);
        }
        printf("\n");
    }
    printf("\n");
}
