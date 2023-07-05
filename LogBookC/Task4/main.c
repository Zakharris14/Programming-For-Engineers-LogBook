#include <stdio.h>
int transpose(int arr[3][4], int traArr[4][3]);
void sum(int arr[4][3]);

int main() {
    int userArr[3][4], trArr[4][3]; // declaring both arrays
    //populating the user array
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            printf("Please Enter A Number:\n");
            scanf("%d", &userArr[i][j]);
        }
    }
    //printing the user array
    printf("Your Initial Array Is:\n");
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            printf("%d   ", userArr[i][j]);
        }
        printf("\n");
    }
    //calling functions to transpose and find sum
    transpose(userArr, trArr);
    sum(trArr);
}

//iterates through arrays swapping rows and columns then prints new array
int transpose(int arr[3][4], int traArr[4][3]){
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 3; ++j) {
            traArr[i][j] = arr[j][i];
        }
    }
    printf("Your New Array is:\n");
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%d   ", traArr[i][j]);
        }
        printf("\n");
    }
}
//iterates through array to find sum
void sum(int arr[4][3]){
    int c = 0;
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 3; ++j) {
            c += arr[i][j];
        }
    }
    printf("The Sum Of The Array Is: %d", c);
}