#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main() {
    int answer, guess;

    srand(time(NULL));//randint seed
    answer = (rand() % (20 + 1 - 1) + 1); // generating random integer between 1-20

    printf("What is your first guess?\n");//prompting user for their first guess
    scanf("%d", &guess);

    // if-else tower to iterate through turns without a loop.
    //Checks the relation between the answer and the guess- informs user and checks their new guess against the answer.

    if(guess == answer){
        printf("Congratulations - the answer was %d!\n", answer);
    } else if(guess < answer){
        printf("Try again - your guess was too low!\nWhat is your second guess?\n");
        scanf("%d", &guess);
        if(guess < answer){
            printf("Try again - Your guess was too low!\nWhat is your final guess?\n");
            scanf("%d", &guess);
            if(guess == answer) {
                printf("Congratulations the answer was %d", answer);
            }else{
                printf("The Correct answer was %d", answer);
            }
        }else if(guess > answer){
            printf("Try again - your guess was too high!\n What is your final guess?\n");
            scanf("%d", &guess);
            if(guess == answer) {
                printf("Congratulations the answer was %d", answer);
            }else{
                printf("The Correct answer was %d", answer);
            }
        }

    }else if(guess> answer){
        printf("Try again - your guess was too high!\nWhat is your second guess?\n");
        scanf("%d", &guess);
        if(guess < answer){
            printf("Try again - Your guess was too low!\nWhat is your final guess?\n");
            scanf("%d", &guess);
            if(guess == answer) {
                printf("Congratulations the answer was %d", answer);
            }else{
                printf("The Correct answer was %d", answer);
            }             }else if(guess > answer){
            printf("Try again - your guess was too high!\n What is your final guess?\n");
            scanf("%d", &guess);
            if(guess == answer) {
                printf("Congratulations the answer was %d", answer);
            }else{
                printf("The Correct answer was %d", answer);
            }
        }
    }
    return 0;
}
