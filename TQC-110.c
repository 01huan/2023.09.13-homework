#include <stdio.h>
#include <stdlib.h>

int main () {
    int a, b, c;
    scanf ("%d %d %d", &a, &b, &c);

    if (100 < a <= 60) {
        printf("1\n");
    } else {
        printf("0\n");
    }
    
    printf("%.2f\n", ((b+1) / 10.0));
    
    if (a > c) {
        printf("%d\n", a);
    } else {
        printf("%d\n", c);
    }
}