#include <stdio.h>

int main(void) {
    char c_array[10];
    int i_array[10];
    double d_array[10];

    char* c_p;
    int* i_p;
    double* d_p;

    c_p = c_array;
    i_p = i_array;
    d_p = d_array;

    c_array[4] = 'p';//populating the 5th element of each array to verify it is returning the correct address.
    i_array[4] = 9;
    d_array[4] = 1.23;

    printf("Start addresses of arrays: c_p = %p, i_p = %p and d_p = %p\n",c_array, i_array, d_array);

    c_p += 4;//incrementing pointers to 5th value
    i_p += 4;
    d_p += 4;

    printf("Addresses at 5th element: c_p = %p, i_p = %p and f_p = %p\n",c_p,i_p,d_p);

    printf("C_Array 5th = %c\ni_array 5th = %d\nd_array 5th = %f\n",*c_p, *i_p, *d_p); // dereferencing pointers to acces values.

    getchar(); getchar();

}