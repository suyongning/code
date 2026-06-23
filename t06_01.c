<<<<<<< HEAD
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
=======
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
>>>>>>> ca3446fd9ee3e893fdaf32236b6840f172d2db18
}