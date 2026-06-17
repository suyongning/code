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
}