#include<stdio.h>
int main(void)
{
    int a, sum = 0;
    printf("整数値を入力してください：");
    scanf("%d", &a);
    for(int b=1; b <= a; b++)
    {
        sum = sum + b;
    }
    printf("%d", sum);
    return 0;
}