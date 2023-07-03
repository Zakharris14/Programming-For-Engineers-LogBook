#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    //seed for randInt
    srand(time(NULL));
    //variable setup
    int m, n, randArr[10], smallest;

    printf("Please Enter The Lower And Upper Limits For The Numbers Seperated By A Space:\n");
    scanf("%d %d", &n, &m);

    //populating array

    for(int i = 0; i < 10; i++){
        randArr[i] = (rand() % (m + 1 - n) + n);
        printf("%d ",randArr[i] );
    }
    //setting the smallest to be the first value so extremely large values will still work
    //if smallest was set to an extremely large value not in the array, there is a possibility the whole array is larger than it
    smallest = randArr[0];
    //for loop to find the smallest value
    for(int i = 0; i < 10; i++){
        if(randArr[i] < smallest){
            smallest = randArr[i];
        }
    }
    printf("\nThe smallest Number In The Array Was %d", smallest);
    return 0;
}
