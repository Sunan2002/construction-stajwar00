#include <stdio.h>
#include <stdlib.h>


struct stats { int points;  char *player;};
struct stats ppg;

int gen(){
    char str[3][10];
    strcpy(str[0], "Jordan");
    strcpy(str[1], "Bryant");
    strcpy(str[2], "James");
    srand(time(NULL));
    int r = rand();
    if (r % 3 == 0) ppg.player = str[0];
    else if (r % 3 == 1) ppg.player = str[1];
    else ppg.player = str[2];
    ppg.points = r % 38;
    printf("Points Per Game Struct: Player - %s, Points - %d \n", ppg.player, ppg.points);
    return 0;
}

int printVar(){
    printf("\n Player Name: %s", ppg.player);
    printf("\n Player Points that Game: %d\n", ppg.points);
    return 0;
}

int changeVal(int a, char *b){
    ppg.player = b;
    ppg.points = a;
    return 0;
}


int main(){
    printf("\n Original Struct:");
    gen();
    printVar();
    char *magic = "Johnson";
    changeVal(36, magic);
    printf("\n After values are changed: \n Player - %s \n Points - %d\n", ppg.player, ppg.points);
    return 0;
}
