#include <stdlib.h>
#include <stdio.h>

int main () {
    int D;
    float R, A, pi = 3.1415;

    scanf("%d", &D);
    R = D / 2.0;
    A = pi * R * R;
    printf("%-10d\n", D);
    printf("%-10.2f\n", R);
    printf("%-10.4f\n", A);
}