#include <stdio.h>
#include <stdlib.h>
#include "Double_Array.h"

struct Double_Array *deep_copy(struct Double_Array *old_struct)
{
    /* creating a deep copy of old_struct */
    int r, c;
    struct Double_Array *new_struct = malloc(sizeof(struct Double_Array));
    new_struct->rowsize = old_struct->rowsize;
    new_struct->colsize = old_struct->colsize;

    new_struct->array = malloc(sizeof(double *) * new_struct->rowsize);
    for (r = 0; r < new_struct->rowsize; r++)
    {
        new_struct->array[r] = malloc(sizeof(double) * new_struct->colsize);
        for (c = 0; c < new_struct->colsize; c++)
        {
            new_struct->array[r][c] = old_struct->array[r][c];
        }
    }

    return (new_struct);
}
