#include <stdlib.h>
#include <stdio.h>

int main () {
    int score;
    scanf("%d", &score);
    if ((score < 0) || (score > 100)) {
        printf("error\n");
    } else {
        if (score > 60) {
            printf("%d\n", (score + 10));
        } else {
            printf("%d\n", (score + 5));
        }
    }
}