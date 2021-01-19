#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#include "a2_q2.h"

int main(int argc, char const *argv[])
{
    /* Seed for random numbers */
    srand(time(0));

    /* Q2a */
    printf("---------------------------\n");
    printf("        Question 2a        \n");
    printf("---------------------------\n");

    struct Double_Array *a1 = double_array(6, 9);
    randomize_array(a1, 0.0, 10.0);
    printf("The address of a1 is %p\n", a1);
    print_struct(a1, "The structure pointed to by a1 is:");

    struct Double_Array *a2 = a1;
    printf("The address of a2 is %p\n", a2);
    print_struct(a2, "The structure pointed to by a2 is:");

    struct Double_Array *a_shallow = shallow_copy(a1);
    printf("The address of a_shallow is %p\n", a_shallow);
    print_struct(a_shallow, "The structure pointed to by a_shallow is:");

    struct Double_Array *a_deep = deep_copy(a1);
    printf("The address of a_deep is %p\n", a_deep);
    print_struct(a_deep, "The structure pointed to by a_deep is:");

    printf("\n\n\n");

    /* Q2b */
    printf("---------------------------\n");
    printf("        Question 2b        \n");
    printf("---------------------------\n");

    a1->array[0][1] = 100.0;
    a2->array[1][2] = 200.0;
    a_shallow->array[2][3] = 300.0;
    a_deep->array[3][4] = 400.0;

    print_struct(a1, "The structure pointed to by a1 is:");
    print_struct(a2, "The structure pointed to by a2 is:");
    print_struct(a_shallow, "The structure pointed to by a_shallow is:");
    print_struct(a_deep, "The structure pointed to by a_deep is:");

    printf("\n\n\n");

    /* Q2c */
    printf("---------------------------\n");
    printf("        Question 2c        \n");
    printf("---------------------------\n");

    struct Double_Array *b1 = double_array(6, 9);
    randomize_array(b1, 10.0, 20.0);
    a2->array = b1->array;

    print_struct(a1, "The structure pointed to by a1 is:");
    print_struct(a2, "The structure pointed to by a2 is:");
    print_struct(a_shallow, "The structure pointed to by a_shallow is:");
    print_struct(a_deep, "The structure pointed to by a_deep is:");
    print_struct(b1, "The structure pointed to by b1 is:");

    a1->array[0][1] = 5000.0;
    a2->array[1][2] = 6000.0;
    a_shallow->array[2][3] = 7000.0;
    a_deep->array[3][4] = 8000.0;
    b1->array[4][5] = 9000.0;

    print_struct(a1, "The structure pointed to by a1 is:");
    print_struct(a2, "The structure pointed to by a2 is:");
    print_struct(a_shallow, "The structure pointed to by a_shallow is:");
    print_struct(a_deep, "The structure pointed to by a_deep is:");
    print_struct(b1, "The structure pointed to by b1 is:");

    printf("\n\n\n");

    /*---------------------------*/
    /*        Question 2d        */
    /*---------------------------*/

    free_array(a1);
    free_array(a_shallow);
    free_array(a_deep);
    free(b1);

    a1 = NULL;
    a2 = NULL;
    a_shallow = NULL;
    a_deep = NULL;
    b1 = NULL;

    return 0;
}
