#include <stdio.h>

int main(void) 
{
    int a;
    printf("年齢を入力してください: ");
    scanf("%d", &a);
    printf(a >= 20 ? "お酒が飲めます。\n" : "お酒は二十歳になってから。\n");
    return 0;
}