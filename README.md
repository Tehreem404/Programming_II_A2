# Programming_II_A2

[AUTHOR]
    Name: Tehreem Nazar
    Student Number: 1108993

[DESCRIPTION]
    This program will complete a set of tasks
        1. Swapping rows and columns
        2. Pointer, Shallow and Deep Copy (see below explanations)


[USAGE]
    Example compile: gcc -ansi -o <filename> <filename.c>
    Example make: make <filename>
    Example execute: ./<filename>

[FILENAMES]
    a2_q1.c
    a2_q1.h
    Double_Array.h
    double_array.c
    randomize_array.c
    print_array.c
    swap_rows.c
    swap_columns.c
    free_array.c
    a2_q2.c
    a2_q2.h
    shallow_copy.c
    deep_copy.c
    print_struct.c

[Q1a]
    This is the faster approach to the problem because instead of going through
    each column and each row and swapping their variables, we can swap the rows easily
    by swapping their pointer locations. The pointer location of the rows are recieved with
    array[a] and array[b], both of which is swapped using a double pointer buffer (temp).

[Q1b]
    The faster approach cannot be applied here because you cant define a column by a single pointer.
    In memory, columns are not stored as arrays (the way rows are). Because rows are stored as arrays,
    they are defined by a pointer.
    
[Q2b]
    a1 and a2 are linked by having the same structure address, which means altering either of the 
    array values will change for both a1 and a2. a_shallow's array will change along with a1 and
    a2 because indexing the array will dereference it to point at the value of array[a][b] in a1/a2
    which will change all three structure arrays, as the same memory location is being pointed at. 
    However, a_deep will not change with the rest because it is a whole new structure with its own 
    assigned memory location that is different from a1, a2 and a_shallow

[Q2c]
    a1 and a2 are linked through the structure address so when a2 array is equal to b1 array, the  
    array pointer of a2 will be equal to array pointer of b1, however, since a1 and a2 point to the
    same structure, a1's array pointer will also change. In the end, a1, a2 and b1 will point to the 
    same array, leaving a_shallow and a_deep pointing to their own arrays.

[Q2d]
    * a1 trivially needs to be freed as it uses malloc
    * a2 does not need freeing since it is pointing at the same struct as a1 which has already been freed
    * a_shallow needs to be freed entirely (both struct and array) only because of the line:
    a2->array = b1->array; Before this, a2 and a_shallow's arrays were pointing at the same values,
    but this line changed a2 (and a1 since they are the same struct) to point to the same array as b1.
    * a_deep also needs to be freed entirely since it shares no pointers in common with any of the
    other structs
    * b1 only needs to be freed at the struct level since a1 was already freed and the line:
    a2->array = b1->array; made a1 and b1 point to the same array address which has been freed.
