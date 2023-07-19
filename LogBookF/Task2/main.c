#include <stdio.h>
struct Players{
    int age;
    char firstName[25];
    char lastName[25];
    float height;
    char position[25];
    int played;
    int scored;
};

int main() {
    int pChoice;
    printf("What player would you like to access?\n");
    scanf("%d", &pChoice);

    struct Players playerList[15];
    printf("Please enter their\nAge:\nFirst Name:\nLast Name:\nHeight:\nPosition:\nGames Played:\nGoals Scored:\nSeperated By Spaces.\n");
    scanf("%d %s %s %f %s %d %d",&playerList[pChoice-1].age,&playerList[pChoice-1].firstName,&playerList[pChoice-1].lastName,&playerList[pChoice-1].height,&playerList[pChoice-1].position,&playerList[pChoice-1].played,&playerList[pChoice-1].scored);

    printf("\n%d\n%s\n%s\n%f\n%s\n%d\n%d\n",playerList[pChoice-1].age,playerList[pChoice-1].firstName,playerList[pChoice-1].lastName,playerList[pChoice-1].height,playerList[pChoice-1].position,playerList[pChoice-1].played,playerList[pChoice-1].scored );

    return 0;
}
