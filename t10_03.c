#include<stdio.h>

int main(void)
{
    int a;
    printf("目標金額を入力(10の倍数):");
    scanf("%d", &a);
    if(a%50==0)
    {
        printf("50円玉の枚数は%d枚です。\n", a/50);
    }
    else if(a%10==0)
    {
        printf("50円が%d枚、10円が%d枚で%d円になります。\n見つかりました!\n", a/50, (a%50)/10,a);
    }
    else
    {
        printf("10円玉で割り切れません。\n");
    }
    return 0;
}