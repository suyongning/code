#include<stdio.h>

int main(void)
{
    int i,j;
    printf("      0枚   1枚   2枚   3枚   4枚   5枚\n");
    for(i=0;i<=3;i++)
    {
        printf("%d枚 ",i);
        for(j=0;j<=5;j++)
        {
            int total = 50*i+10*j;
            printf("%5d ",total);
        }
        printf("\n");
    }
    return 0;
}