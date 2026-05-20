#include <stdio.h>

int main(void) 
{
    int a , b;
    printf("整数a:");
    scanf("%d", &a);
    printf("整数b:");
    scanf("%d", &b);
    if (a == b)
       puts ("a == bは 1 です。\na != bは 0 です。");
       else
       puts ("a == bは 0 です。\na != bは 1 です。");
    return 0;
}