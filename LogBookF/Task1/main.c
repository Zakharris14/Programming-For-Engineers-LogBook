#include <stdio.h>

typedef struct CompNums{
    double real;
    double imaginary;
} compNums;


void taskA(){
    struct CompNums a1;
    struct CompNums a2;
    struct CompNums a3;
}
void taskB(){
    struct CompNums a1;
    a1.real = 0.0;
    a1.imaginary = 1.0;

    struct CompNums a2;
    a2.real = 1.0;
    a2.imaginary = 0.0;

    struct CompNums a3;
}
void taskC(){
    struct CompNums a1;
    a1.real = 0.0;
    a1.imaginary = 1.0;

    struct CompNums a2;
    a2.real = 1.0;
    a2.imaginary = 0.0;

    struct CompNums a3;

    a1 = a2;
    printf("%f, %f\n", a1.real, a1.imaginary);
}
void taskD(){
    struct CompNums a1;
    a1.real = 0.0;
    a1.imaginary = 1.0;

    struct CompNums a2;
    a2.real = 1.0;
    a2.imaginary = 0.0;

    struct CompNums a3;

    a3 = (compNums){.imaginary = a1.imaginary + a2.imaginary, .real = a1.real + a2.real};
    printf("\n%f, %f", a3.real, a3.imaginary);
}
int main() {
    taskA();
    taskB();
    taskC();
    taskD();
}
