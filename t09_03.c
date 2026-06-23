<<<<<<< HEAD
#include<stdio.h>
int main(void)
{
    int a,c=0;
    printf("整数値を入力してください：");
    scanf("%d", &a);
    for(int b = 1; b <= a; b += 2)
    {
        if(b%2!=0);
        {
            c = c + b;
        }
    }
    printf("%d",c);
    return 0;
=======
#include<stdio.h>
int main(void)
{
    int a,c=0;
    printf("整数値を入力してください：");
    scanf("%d", &a);
    for(int b = 1; b <= a; b += 2)
    {
        if(b%2!=0);
        {
            c = c + b;
        }
    }
    printf("%d",c);
    return 0;
>>>>>>> ca3446fd9ee3e893fdaf32236b6840f172d2db18
}