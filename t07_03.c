<<<<<<< HEAD
#include<stdio.h>
int main(void)
{
    int a;
    printf("整数値を入力してください:");
    scanf("%d", &a);
    switch (a)
    {
        case 0:printf("0");
        case 1:printf("1");
        case 2:printf("2");
        case 3:printf("3");
        case 4:printf("4");
        case 5:printf("5");
        case 6:printf("6");
        case 7:printf("7");
        case 8:printf("8");
        case 9:printf("9\n");
            break;
        default:
            printf("0から9の整数値を入力してください.\n");
            break;
    }
    return 0;
=======
#include<stdio.h>
int main(void)
{
    int a;
    printf("整数値を入力してください:");
    scanf("%d", &a);
    switch (a)
    {
        case 0:printf("0");
        case 1:printf("1");
        case 2:printf("2");
        case 3:printf("3");
        case 4:printf("4");
        case 5:printf("5");
        case 6:printf("6");
        case 7:printf("7");
        case 8:printf("8");
        case 9:printf("9\n");
            break;
        default:
            printf("0から9の整数値を入力してください.\n");
            break;
    }
    return 0;
>>>>>>> ca3446fd9ee3e893fdaf32236b6840f172d2db18
}