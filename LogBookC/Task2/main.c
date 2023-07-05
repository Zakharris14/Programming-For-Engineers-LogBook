#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    //seed for randint and variables
    srand(time(NULL));
    int wNum[5], gNum[5], win;

    //populating the winning number array
    for(int i = 0; i < 5; i++) {
        wNum[i] = (rand() % 21);
    }

    //populating the users array
    for(int i = 0; i < 5; i++){
        printf("\nPlease Enter a Number for slot %d: ",i +1);
        scanf("%d", &gNum[i]);
        if(gNum[i] > 20 || gNum < 1){
            printf("\nPlease Enter a Valid Number for slot %d: ",i +1);
            scanf("%d", &gNum[i]);
        }
    }

    //win condition and counter
    for(int i = 0; i < 5; i++){
        for (int j = 0; j < 5; ++j) {
            if(gNum[i] == wNum[j]){
                win++;
            }
        }
    }

    //win check and message
    if(win > 0){
        printf("Congratulations %d of your numbers matched!\nThe Winning numbers were:\n", win);
        for(int i = 0; i < 5; i++) {
            printf("%d ",wNum[i]);
        }
    }else{
        printf("Unlucky, none of your numbers matched\nThe winning numbers were\n");
        for(int i = 0; i < 5; i++) {
            printf("%d ",wNum[i]);
        }
    }

}
