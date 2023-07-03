#include <stdio.h>

int main() {
    int a, b, c, d, e, big, small; // initialising variables for user input and for the largest and smallest.

    printf("Please Enter 5 Whole Numbers Seperated By Spaces:\n");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);

    //if else statement checking if the variable is greater than the others and saving it as 'big' if it is

    if(a > b && a > c && a > d && a > e){
        big = a;
    }else if(b > a && b > c && b > d && b > e){
        big = b;
    }else if(c > a && c > b && c > d && c > e){
        big = c;
    }else if(d > a && d > c && d > b && d > e){
        big = d;
    }else{
        big = e;
    }

    //if else statement checking if the variable is smaller than the others and saving it as 'small' if it is

    if(a < b && a < c && a < d && a < e){
        small = a;
    }else if(b < a && b < c && b < d && b < e){
        small = b;
    }else if(c < a && c < b && c < d && c < e){
        small = c;
    }else if(d < a && d < c && d < b && d < e){
        small = d;
    }else{
        small = e;
    }

    printf("The largest Number Was: %d\nThe Smallest Number Was: %d\n", big, small);
    return 0;
}
