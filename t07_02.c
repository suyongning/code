<<<<<<< HEAD
#include<stdio.h>

int main(void)
{
    int a;
    printf("整数値を入力してください：");
    scanf("%d", &a);
    
    switch(a)
    {
        case 11: printf("JACK\n"); break;
        case 12: printf("QUEEN\n"); break;
        case 13: printf("KING\n"); break;
        default: printf("%d\n", a); break;
    }
    return 0;
=======
#include<stdio.h>

int main(void)
{
    int a;
    printf("整数値を入力してください：");
    scanf("%d", &a);
    
    switch(a)
    {
        case 11: printf("JACK\n"); break;
        case 12: printf("QUEEN\n"); break;
        case 13: printf("KING\n"); break;
        default: printf("%d\n", a); break;
    }
    return 0;
>>>>>>> ca3446fd9ee3e893fdaf32236b6840f172d2db18
}