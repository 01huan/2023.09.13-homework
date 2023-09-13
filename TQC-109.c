#include <stdlib.h>
#include <stdio.h>

int main () {
    int score;
    scanf("%d", &score);
    if ((score < 0) || (score > 100)) {
        printf("error\n");
    }
    else {
        if (score >= 60) {
            printf("pass\n");
        } else {
            printf("fail\n");
        }
        if (score % 2 == 0) {
            printf("even\n");
        } else {
            printf("odd\n");
        }
    }
}