#include<stdio.h>
int main(void)
{
        int a;
        printf("整数値を入力してください：");
        scanf("%d",&a);
            while(a>=0)
            {
            if(a % 2 != 0)
            {
                a--;
                continue;
            }
            
             printf("%d\n",a);
             a--;
            }
    return 0;
}