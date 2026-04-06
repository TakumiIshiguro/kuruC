#include <stdio.h>

int main(void){
    int data[10];
    int i, number;

    printf("数字を入力してください\n");
    
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &number);
        data[i] = number;
    }
    
    for (i = 0; i < 10; i++)
    {
        printf("%d回目に入力された数字：%d\n", i + 1, data[i]);
    }

    return 0;
}

