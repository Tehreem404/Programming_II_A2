#include <stdio.h>
#include <stdlib.h>
#include "Double_Array.h"

struct Double_Array *double_array(int row, int col)
{
    int i;
    struct Double_Array *new_struct;

    /* Assigns/allocates values/memory to new_struct */
    new_struct = malloc(sizeof(struct Double_Array));
    if (new_struct == NULL)
    {
        printf("Error with memory allocation\n");
        exit(1);
    }

    new_struct->array = malloc(sizeof(double *) * (row));
    if (new_struct->array == NULL)
    {
        printf("Error with memory allocation\n");
        exit(1);
    }

    for (i = 0; i < row; i++)
    {
        new_struct->array[i] = malloc(sizeof(double) * (col));
        if (new_struct->array[i] == NULL)
        {
            printf("Error with memory allocation\n");
            exit(1);
        }
    }

    new_struct->colsize = col;
    new_struct->rowsize = row;

    return (new_struct);
}
