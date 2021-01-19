#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#include "a2_q1.h"

int main(int argc, char const *argv[])
{
    printf("--------------------------\n");
    printf("        Question 1        \n");
    printf("--------------------------\n");

    int rows = 6;
    int cols = 9;
    struct Double_Array *rand_struct = double_array(rows, cols);

    srand(time(0));
    randomize_array(rand_struct, 10.0, 50.0);
    
    print_array(rand_struct);

    int rand_row_1 = rand() % rows;
    int rand_row_2 = rand() % rows;
    swap_rows(rand_struct, rand_row_1, rand_row_2);

    printf("Rows %d and %d were swapped!\n", rand_row_1, rand_row_2);
    print_array(rand_struct);

    int rand_col_1 = rand() % cols;
    int rand_col_2 = rand() % cols;
    swap_columns(rand_struct, rand_col_1, rand_col_2);

    printf("Columns %d and %d were swapped!\n", rand_col_1, rand_col_2);
    print_array(rand_struct);

    printf("\n\n\n");

    free_array(rand_struct);

    return (0);
}
