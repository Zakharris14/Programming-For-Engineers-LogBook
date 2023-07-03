#include <stdio.h>
#include <math.h>

int main() {
    int useNum;
//taking user input
    printf("Please enter a number between -100 and 100\n");
    scanf("%d", &useNum);


//finding whether the number is odd or even
    if(useNum < -100 || useNum > 100){
        printf("Please Enter A Valid Number");
    }else{
        if(useNum % 2 == 0){
            printf("The Number You Entered is Even!\n");
        }else{
            printf("The Number You Entered is Odd!\n");
        }
//finding whether the number is positive or negative.
        if(useNum > 0 || useNum == 0){
            printf("Your Number Is Positive!\n");
        }else{
            printf("Your Number Is Negative!\n");
        }
    }

    return 0;
}
