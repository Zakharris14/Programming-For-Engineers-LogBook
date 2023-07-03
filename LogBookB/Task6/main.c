#include <stdio.h>
#include <math.h>

int main() {
    int a, b; char op;

    printf("Please enter two integers followed by an operator (+, -, /, %, or ^). All seperated by spaces.\n");
    scanf("%d %d %c", &a, &b, &op);


    //switch statement for all operation options
    switch (op) {
        case '/':
            printf("Your Numbers And Operator Were:\n%d  %d  %c\nThe result is %d %c %d = %d", a, b , op, a, op, b, a / b);
            break;
        case '+':
            printf("Your Numbers And Operator Were:\n%d  %d  %c\nThe result is %d %c %d = %d", a, b , op, a, op, b, a + b);
            break;
        case '-':
            printf("Your Numbers And Operator Were:\n%d  %d  %c\nThe result is %d %c %d = %d", a, b , op, a, op, b, a - b);
            break;
        case '%':
            printf("Your Numbers And Operator Were:\n%d  %d  %c\nThe result is %d %c %d = %d", a, b , op, a, op, b, a % b);
            break;
        case '^':
            printf("Your Numbers And Operator Were:\n%d  %d  %c\nThe result is %d %c %d = %f", a, b , op, a, op, b, pow(a,b));//pow returns a float
            break;
        default://in case of invalid input
            printf("Please enter valid arguments.");
    }

    return 0;
}
