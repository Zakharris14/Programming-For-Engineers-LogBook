
#include <stdio.h>

int main() {
    int numGrad;

    printf("What Numerical Grade Did You Get?\n");
    scanf("%d", &numGrad);

    switch (numGrad/10) {
        case 10:
        case 9:
        case 8:
            printf("Your Numerical Grade Was: %d\nYour Letter Grade is A*\n", numGrad);
            break;
        case 7:
            printf("Your Numerical Grade Was: %d\nYour Letter Grade is A\n", numGrad);
            break;
        case 6:
            printf("Your Numerical Grade Was: %d\nYour Letter Grade is B\n", numGrad);
            break;
        case 5:
        case 4:
            printf("Your Numerical Grade Was: %d\nYour Letter Grade is C\n", numGrad);
            break;
        case 3:
        case 2:
        case 1:
            printf("Your Numerical Grade Was: %d\nYour Letter Grade is F\n", numGrad);
            break;
        default:
            printf("Please enter a valid numerical grade\n");

    }
}
