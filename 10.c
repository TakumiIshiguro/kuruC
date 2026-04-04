#include <stdio.h>

int main(void){
    int score;
    do {
        printf("点数を入力：");
        scanf("%d", &score);
    } while (score < 0 || 100 < score);
    return 0;
}