#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));//generating seed for rand()

    int upper, lower; // initialising variables for upper and lower limits

    printf("Please enter the Upper and Lower limits of the number\n"); // prompting and storing values for upper and lower limits
    scanf("%d", &upper);
    scanf("%d", &lower);

    printf("Your Lower Limit was: %d\nYour Upper Limit Was: %d\nThe Number Generated was: %d",  upper, lower, rand() % (upper + 1 - lower) + lower);
    //Output for the random number and repeating the boundaries to the user.

    return 0;
}
