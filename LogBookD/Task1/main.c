#include <stdio.h>
#include <math.h>
//prototype
float sphere(float r);
//main
int main() {
    float radius;
    while(1){
        printf("Please enter the radius of the sphere\n");
        scanf("%f",&radius);
        //calling function for volume calculation
        printf("%f\n", sphere(radius));
    }
    return 0;
}
//function declaration for vol calculation
float sphere(float r){
    float vol;
    vol = ((pow(r, 3)*M_PI)*4)/3;
    return vol;
}