#include <stdio.h>
#include <stdlib.h>

void swap(int a, int b);

int main(void) {
    int i = 3, j= 4;
    swap (i, j);


    system("PAUSE");
    return 0;
}

/*Function to swap values of two variables*/

void swap (int a, int b) {
    int tmp = b;
    b = a; a = tmp;
    printf("%d %d\n",a,b); // moved from main function and i and j replaced with a and b

}