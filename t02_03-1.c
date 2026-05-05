// [演習タイトル]
#include <stdio.h>

int main(void)
{
    // TODO: ここに書く
    int n;
    
    printf("整数を入力せよ : ");
    scanf("%d", &n);

    if (n % 2)
        puts("その数は奇数です。");
    else
        puts("その数は偶数です。");
    
    return 0;
}