#include <stdio.h>

int main(){
    int n, temp, rev = 0;
    scanf("%d", &n);

    for( ; ; ){
        if(n/10 != 0){
            temp = n % 10;
            rev = rev * 10 + temp;
            n = n / 10;
        } else {
            rev = rev * 10 + n;
            printf("%d", rev);
            break;
        }
    }

    return 0;
}
