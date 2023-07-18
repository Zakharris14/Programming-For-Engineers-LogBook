#include <stdio.h>

void numSwap(int *a, int *b);//function declaration with two pointers as parameters

int main() {
    int x, y;
    printf("Please enter two numbers seperated by a space:\n");
    scanf("%d %d", &x, &y);//saving values to addresses of variables

    numSwap(&x, &y); // calling the function with the variables addresses
    return 0;
}

void numSwap(int *a, int *b){
    int t; // temp int for numSwap

    t = *a;//  t = the value stored in the address a points to. * dereferences
    *a = *b; // a now points to where b originally pointed to
    *b = t;// b takes the address from a

    printf("Your Swapped Numbers Are: %d, %d", *a,*b);//printing output by dereferencing pointers to values post-swap
}
