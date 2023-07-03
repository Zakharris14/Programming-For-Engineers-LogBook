#include <stdio.h>

int main() {
    int x; float y,z; //delcaring variables on the same line to avoid unnecessary lines.
    x = 7; y = 45.54; z = 99.9; // assigning vales on the same line to avoid unnecessary lines
    printf("%d, %.4g, %.3g",x, y, z); // using %.g to remove trailing zeros. This sets the total numerical width of the output not counting the decimal.
    return 0;
}
