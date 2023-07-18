#include <stdio.h>
struct Players{
    int age;
    char[25] firstName;
    char[25] lastName;
    float height;
    char[25] position;
    int played;
    int scored;
};

int main() {
    int pChoice;
    printf("What player would you like to access?\n");
    scanf("%d", &pChoice);

    struct Players playerList[15];
    printf("Please enter their\nAge:\nFirst Name:\nLast Name:\nHeight:\nPosition:\nGames Played:\nGoals Scored:\nSeperated By Spaces.\n");
    scanf("%d %c %c %f %c %f %f",playerList[pChoice].age,playerList[pChoice].firstName,playerList[pChoice].lastName,playerList[pChoice].height,playerList[pChoice].position,playerList[pChoice].played,playerList[pChoice].scored);

    printf("%\n%\n%\n%\n%\n%\n%\n%")

    return 0;
}
