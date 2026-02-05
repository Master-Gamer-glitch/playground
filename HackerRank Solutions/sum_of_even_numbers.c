#include <stdio.h>

int main(){
    long long n, sum = 0;
    scanf("%lld", &n);
    long long a[n];
    if(n > 0){
        for(long long i = 0; i <= n-1; i++){
            scanf("%lld", &a[i]);
            if(a[i]%2 == 0){
                sum = sum + a[i];
            } else {
                continue;
            }

        }
    } else {
        printf("0");
    }
    printf("%lld", sum);
    return 0;
}
