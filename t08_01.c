#include<stdio.h>
int main(void)
{
    int a;
    do
    {
        printf("偶数を入力してください:");
        scanf("%d", &a);
    } while(a % 2 != 0);
    printf("偶数が入力されました。\n", a);
    return 0;
}