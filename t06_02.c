#include <stdio.h>

int main(void)
{
    int score;
    printf("点数を入力してください：");
    scanf("%d", &score);
    if (score >= 90) {
        puts("S評価");
    } else {
    if (score >= 80) {
        puts("A評価");
    } else {
        if (score >= 70) {
            puts("B評価");
        } else {
            if (score >= 60) {
                puts("C評価");
            } else {
                puts("D評価");
            }
        }
    }
    }
    return 0;
    }