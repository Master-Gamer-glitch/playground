#include <stdio.h>

int main(){
    
    int n, temp, sum = 0;
    scanf("%d", &n);
    for(int i = 0; ; i++){
        if(n/10 != 0){
            temp = n%10;
            n = n/10;
            sum = sum + temp;
            continue;
        } else {
            sum = sum + n;
            printf("%d", sum);
            break;
        }
    }
    return 0;
}
