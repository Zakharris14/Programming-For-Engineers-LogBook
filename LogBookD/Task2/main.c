#include <stdio.h>
#include <math.h>

void numRet(float a,float b,float c); // structure for function

int main() {
    float a, b, c;
    //taking user input to be passed to function
    printf("Please enter three floats seperated by a space:\n");
    scanf("%f %f %f",&a ,&b ,&c);

    //calling numRet function
    numRet(a, b, c);
    return 0;
}

void numRet(float a, float b, float c){
    float temp, max;

    max = fmaxf(a, fmaxf(b, c)); // finding the max of a,b and c by finding the max of b and c and comparing to a
    printf("The largest number was: %f\n", max);//printing max value

    temp += a + b + c;//mean calculations
    temp = temp / 3;
    //printing mean value
    printf("The mean of the values is: %f\n", temp);
}