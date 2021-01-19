#include <stdio.h>
#include <stdlib.h>
#include "Double_Array.h"

void print_struct(struct Double_Array *my_struct, char *header) {
    /* Print struct details */
    printf("%s\n", header);
    printf("struct address = %p\n", my_struct);
    printf("row_size = %d, col_size = %d\n", my_struct->rowsize, my_struct->colsize);
    printf("array address = %p\n", my_struct->array);
    printf("\n");

    /* Print contents of the array within the struct */
    int r, c;

    for (r = 0; r < my_struct->rowsize; r++)
    {
        for (c = 0; c < my_struct->colsize; c++)
        {
            printf("%0.1f\t", my_struct->array[r][c]);
        }
        printf("\n");
    }
    printf("\n\n");
}
