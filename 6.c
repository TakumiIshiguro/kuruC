#include <stdio.h>

int main(void){
    int teika;

    printf("定価を入力してください\n");
    scanf("%d", &teika);
    printf("１割引：%d\n", (int)(teika * 0.9));
    printf("３割引：%d\n", (int)(teika * 0.7));
    printf("５割引：%d\n", (int)(teika * 0.5));
    printf("８割引：%d\n", (int)(teika * 0.2));

    return 0;
}