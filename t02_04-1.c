// [演習タイトル]
#include <stdio.h>

int main(void)
{
    // TODO: ここに書く
    int a, b, sum = 0, i;

    puts("二つの整数を入力せよ。");
    printf("整数a: "); scanf("%d", &a);
    printf("整数b: "); scanf("%d", &b);

    for (i = (a < b ? a : b); i <= (a > b ? a : b); i++){
        sum += i;
    }

    printf("%d以上%d以下の全整数の和は%dです。\n",
           (a < b ? a : b), (a > b ? a : b), sum);
    
           
    return 0;
}