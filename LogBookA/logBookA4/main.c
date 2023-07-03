#include <stdio.h>

int main() {
    float cel, kel, far; // initialising all the variables needed

    printf("Please Enter The Temperature In Fahrenheit:\n");
    scanf("%f", &far);// prompting the user for the temperature and storing it in the far variable

    cel = (far-32)* 5 / 9; // calculating Celsius from Fahrenheit
    kel = cel + 273.15;// calculating kelvin from Celsius

    printf("Temp In F: %.4g\nTemp In C: %.3g\nTemp In K: %.5g", far, cel, kel);//outputting the converted temperatures with length specifiers to remove trailing zeros.
    // Arbitrary lengths chosen based on likelihood.
}
