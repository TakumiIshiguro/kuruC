#include <stdio.h>

int main(void){
    int soda = 198;
    int milk = 138;
    int result = (int)(1000 - (1.05 * (soda + 2 * milk)));
    printf("お釣りは%d円です\n", result);
    return 0;
}