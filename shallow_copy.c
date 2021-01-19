#include <stdio.h>
#include <stdlib.h>
#include "Double_Array.h"

struct Double_Array *shallow_copy(struct Double_Array *old_struct)
{
    /* creating a shallow copy of old_struct */
    struct Double_Array *new_struct = malloc(sizeof(struct Double_Array));
    new_struct->array = old_struct->array;
    new_struct->rowsize = old_struct->rowsize;
    new_struct->colsize = old_struct->colsize;
    return (new_struct);
}
