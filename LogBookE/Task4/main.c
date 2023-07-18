#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
        srand(time(NULL)); // seed for randint

        int arr[60], useNum, count;
        int* pArray = &arr;

    for (int i = 0; i < 60; ++i) {//loop to populate array with integers
        arr[i] = (rand() % 9 )+ 1;
    }

    printf("What number would you like to check for?\n");
    scanf("%d", &useNum); //prompting for and taking user number

    for (int i = 0; i < 60; ++i) {//checking the array by iterating the pointer and incrementing count if their number is present.
        if (*(pArray + i) == useNum){
            count++;
        }
    }

    //printing the array and the number of times their number was in it to the user
    printf("The Array Was:\n");
    for (int i = 0; i < 60; ++i) {//loop to populate array with integers
        printf("%d ", arr[i]);
    }
    printf("\nAnd %d appeared in it %d times", useNum, count);
}
