#include "Double_Array.h"

struct Double_Array *double_array(int row, int col);
void randomize_array(struct Double_Array *rand_struct, double a, double b);
void print_array(struct Double_Array *rand_struct);
void free_array(struct Double_Array *rand_struct);
int swap_rows(struct Double_Array *rand_struct, int a, int b);
int swap_columns(struct Double_Array *rand_struct, int a, int b);
struct Double_Array *shallow_copy(struct Double_Array *old_struct);
struct Double_Array *deep_copy(struct Double_Array *old_struct);
void print_struct(struct Double_Array *my_struct, char *header);
