#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand((unsigned int)time(NULL));
    int dice[2],total;

    printf("Rolling the dice...\n");
    for(int i = 0; i < 2; i++) {
        dice[i] = rand() % 7;
        total += dice[i];
    }
    for(int i = 0; i < 2; i++) {
        printf("Die %d: %d\n", i + 1, dice[i]);
    }
    printf("Total value: %d\n", total);
    return 0;
}