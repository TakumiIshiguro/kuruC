#include <stdio.h>

int main(void)
{
    char str[150];
    char family[50];
    char first[50];

    printf("苗字を入力してください\n");
    scanf("%s", family);
    printf("名前を入力してください\n");
    scanf("%s", first);

    sprintf(str, "%s%s\n", family, first);
    printf("%s", str);

    return 0;
}