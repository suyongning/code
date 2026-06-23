<<<<<<< HEAD
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
=======
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
>>>>>>> ca3446fd9ee3e893fdaf32236b6840f172d2db18
}