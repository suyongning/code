#include<stdio.h>

int main(void)
{
    double a;
    printf("実数を入力してください。 \n");
    printf("実数 : ");
    scanf("%lf", &a);
    printf("入力された実数は : %lf。\n", a);

    return 0;
}