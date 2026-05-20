#include <stdio.h>

int main(void) 
{
   int num;
   printf("入力してください：") ;
   scanf("%d", &num); 
   if (num == 0)
       puts ("入力はゼロです。");
   else
       puts ("入力はゼロではありません。");
    return 0;
}