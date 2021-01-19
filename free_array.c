#include <stdio.h>
#include <stdlib.h>
#include "Double_Array.h"

void free_array(struct Double_Array *rand_struct)
{
    int r;
    /* Frees the structure */
    for (r = 0; r < rand_struct->rowsize; r++)
    {
        free(rand_struct->array[r]);
        rand_struct->array[r] = NULL;
    }
    free(rand_struct->array);
    rand_struct->array = NULL;

    free(rand_struct);
    rand_struct = NULL;
}
