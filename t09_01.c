#include<stdio.h>
int main(void)
{
    int a;
    printf("整数値を入力してください：");
    scanf("%d", &a);
    for(int i = 1; i <= a; i++)
    {
        printf("%d\n", i);
    }
    return 0;
}