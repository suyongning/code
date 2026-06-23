<<<<<<< HEAD
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
=======
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
>>>>>>> ca3446fd9ee3e893fdaf32236b6840f172d2db18
}