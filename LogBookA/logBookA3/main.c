#include <stdio.h>

int main() {
    int input, flipped, remainder; // declaring input and the flipped input variables
    printf("Please input a 3 digit integer.");//prompting for input
    scanf("%d", &input);//saving input to the input variable
    printf("Your input was %d\n", input);

    //Using a while loop -
    while (input != 0) {
        remainder = input % 10;
        flipped = flipped * 10 + remainder;
        input /= 10;
    }

    printf("Flipped number = %d", flipped);

}
