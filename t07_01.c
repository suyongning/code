#include <stdio.h>

int main(void)
{
    int a;
    printf("整数値を入力してください：");
    scanf("%d", &a);
    switch (a % 2)
    {    case 0:
        printf("偶数です。");
        break;
    case 1:
        printf("奇数です。");
        break;
    }
    return 0;
}