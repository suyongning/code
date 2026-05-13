#include<stdio.h>

int main(void)
{
    int a;
    printf("整数を入力してください。\n");
    printf("整数 : ");
    scanf("%d", &a);
    int b = a / 10;
    int c = b % 10;
    printf("2の数は %d です。\n", c);

    return 0;
}