#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int A;
    int n5 = 0, n2 = 0, n1 = 0;

    scanf("%d", &A);

    if (A <= 0) {
        printf("Invalid amount");
        return 0;
    }

    n5 = A / 500;
    A = A % 500;

    n2 = A / 200;
    A = A % 200;

    n1 = A / 100;

    printf("500-rupee notes: %d\n", n5);
    printf("200-rupee notes: %d\n", n2);
    printf("100-rupee notes: %d", n1);

    return 0;
}
