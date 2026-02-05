#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int rev = 0;

    // Handle negative numbers
    int sign = 1;
    if(n < 0){
        sign = -1;
        n = -n;
    }

    while(n > 0){
        rev = rev * 10 + (n % 10);
        n = n / 10;
    }

    printf("%d", rev * sign);
    return 0;
}
