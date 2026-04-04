#include <stdio.h>

int main(void){
    int year;

    printf("西暦年を入力してください\n");
    scanf("%d", &year);
    if (year % 4 == 0)
        printf("夏季オリンピックが開催されます\n");
    else if ((year - 2) % 4 == 0)
        printf("冬季オリンピックが開催されます\n");
    else 
        printf("オリンピックが開催されません\n");

    return 0;
}