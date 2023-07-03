#include <stdio.h>

int main() {
    float   a, b ,c;

    printf("Please enter two float values seperated by a space:\n");//prompting the user for input and storing it in a and b
    scanf("%f %f", &a, &b);

    printf("Your Initial Values Were\nA: %f\nB: %f\n", a, b);//printing this before swapping values as it saves creating more variables for before and after.
    //swapping values using C as a holder
    c = a;
    a = b;
    b = c;

    printf("Your Final Values Are\nA: %f\nB: %f\n", a, b);//printing the values after the swap.

    return 0;
}
