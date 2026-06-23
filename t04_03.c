#include<stdio.h>

int main(void)
{
   double a , b;
   printf("身長と体重を入力してください。\n身長:");
    scanf("%lf", &a);
    printf("体重kg:");
    scanf("%lf", &b);
    printf("BMIは %lf です。", b / (a / 100)/(a / 100));
     return 0;
}