#include <stdio.h>
#include <stdbool.h>
#include <math.h>

//function to check whether the number inputted is an armstrong number
bool armCheck(int num){
//variable declaration
    int tempNum, r, digCount;
    float result;

    //logic by programiz.com
    for (tempNum= num; tempNum!= 0; ++digCount) {
        tempNum /= 10;
    }
    for (tempNum= num; tempNum!= 0; tempNum/= 10) {
        r = tempNum% 10;
        result += pow(r, digCount);
    }
//returns whether is armstrong number or not
    if(result == num){
        return true;
    }else{
        return false;
    }
}
//function to check whether the number inputted is a prime
bool primeCheck(int num){
    for(int i = 1; i < (num/2)+1; i++){ //+1 so
        if(num % i == 0 && i !=1){
            return false;
        }
    }
    return true;
}

int main() {
    int useNum;
    printf("Please enter a number\n");
    scanf("%d", &useNum);

    //calling functions and returning values on whether they are prime or armstrong or both
    if(primeCheck(useNum) == true){
        printf("Your Number Is Prime.\n");
    } else{
        printf("Your Number Is Not Prime.\n");
    }
    if(armCheck(useNum) == true){
        printf("Your Number Is An Armstrong Number.\n");
    } else{
        printf("Your Number Is Not An Armstrong Number.\n");
    }

    return 0;

}
