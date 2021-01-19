#include <stdio.h>
#include <stdlib.h>
#include "Double_Array.h"

int swap_rows(struct Double_Array *rand_struct, int a, int b)
{
    /* assuming row 1 is index 0 */
    /* Q1a: This is the faster approach to the problem because instead of going through
    each column and each row and swapping their variables, we can swap the rows easily
    by swapping their pointer locations. The pointer location of the rows are recieved with
    array[a] and array[b], both of which is swapped using a double pointer buffer (temp) */
    if (a < rand_struct->rowsize && b < rand_struct->rowsize && 0 <= a && 0 <= b)
    {
        double *temp;
        temp = rand_struct->array[a];
        rand_struct->array[a] = rand_struct->array[b];
        rand_struct->array[b] = temp;
        return (1);
    }
    else
    {
        printf("Row selected does not exist\n");
        return (0);
    }
}
