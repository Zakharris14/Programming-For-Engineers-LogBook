#include <stdio.h>
#include <math.h>
void boxSize(float boxOne[], float boxTwo[], float boxThree[]);

int main() {
    float boxOne[3], boxTwo[3], boxThree[3];//using an array for box attributes as I was having problems getting a structure to pass without using pointers

    for (int i = 0; i < 3; ++i) {//iterating through boxes to populate with sizes
        switch (i) {//switch to find whether it is width, height or depth and prompt user accordingly
            case 0:
                printf("Please enter the height of the first box:\n");
                scanf("%f", &boxOne[i]);
                break;
            case 1:
                printf("Please enter the width of the first box:\n");
                scanf("%f", &boxOne[i]);
                break;
            case 2:
                printf("Please enter the depth of the first box:\n");
                scanf("%f", &boxOne[i]);
                break;
            default:
                printf("Something Went Wrong Please Try Again:\n");
        }
    }
    for (int i = 0; i < 3; ++i) {
        switch (i) {
            case 0:
                printf("Please enter the height of the second box:\n");
                scanf("%f", &boxTwo[i]);
                break;
            case 1:
                printf("Please enter the width of the second box:\n");
                scanf("%f", &boxTwo[i]);
                break;
            case 2:
                printf("Please enter the depth of the second box:\n");
                scanf("%f", &boxTwo[i]);
                break;
            default:
                printf("Something Went Wrong Please Try Again:\n");
        }
    }//repeat of iterating but for second box
    for (int i = 0; i < 3; ++i) {
        switch (i) {
            case 0:
                printf("Please enter the height of the third box:\n");
                scanf("%f", &boxThree[i]);
                break;
            case 1:
                printf("Please enter the width of the third box:\n");
                scanf("%f", &boxThree[i]);
                break;
            case 2:
                printf("Please enter the depth of the third box:\n");
                scanf("%f", &boxThree[i]);
                break;
            default:
                printf("Something Went Wrong Please Try Again:\n");
        }
    }//repeat of iterating but for third box

    boxSize(boxOne, boxTwo, boxThree);//calling function to calculate the smallest box that will fit all items inside.
}

void boxSize(float boxOne[], float boxTwo[], float boxThree[]){
    float contBox[3];
    contBox[0] = boxOne[0] + boxTwo[0] + boxThree[0];//min height will be the sum of the items height
    contBox[1] = fmaxf(boxOne[1], fmaxf(boxTwo[1], boxThree[1]));//min width will be the widest of the three items
    contBox[2] = fmaxf(boxOne[2], fmaxf(boxTwo[2], boxThree[2])); //min depth will be the deepest of the three items

    //printing the results to the user
    printf("The smallest box that will fit all three items inside will be:\nHeight: %f\nWidth: %f\nDepth: %f\n", contBox[0], contBox[1], contBox[2]);
}