#include <stdio.h>

int main(void)
{
    int a;
    printf("小遣いの残高を入力してください：");
    scanf("%d", &a);
    if (a >= 1000)
    {
        int b;
        printf("いくら使いますか：");
        scanf("%d", &b);
        printf("残りは%d円です", a - b);
    }
    else{
    }
    return 0;
}