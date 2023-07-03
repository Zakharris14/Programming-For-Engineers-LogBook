#include <stdio.h>

int main() {
    int a, b, c, d, sorted[4];
    printf("Please Enter Four Whole Numbers Seperated By Spaces:\n");
    scanf("%d%d%d%d", &a, &b, &c, &d);

    if(a > b && a > c && a > d) {
        sorted[0] = a;
        if (b < a && b > c && b > d) {
            sorted[1] = b;
            if (c < a && c < b && c > d) {
                sorted[2] = c;
                sorted[3] = d;
            }else{
                sorted[2] = d;
                sorted[3] = c;
            }
        } else if(c < a && b < c && c > d){
            sorted[1] = c;
            if(b < a && b < c && b > d){
                sorted[2] = b;
                sorted[3] = d
            }
        }


    }



    else if(b > a && b > c && b > d){
        sorted[0] = b;
    }else if(c > a && c > b && c > d){
        sorted[0] = c;
    }else {
        sorted[0] = d;
    }


    if(a < b && a < c && a < d){
        sorted[3] = a;
    }else if(b < a && b < c && b < d){
        sorted[3] = b;
    }else if(c < a && c < b && c < d){
        sorted[3] = c;
    }else{
        sorted[3] = d;
    }



    return 0;


}
