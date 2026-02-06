#include <stdio.h>

int main(){
    int n, temp, posc = 0, negc = 0, zerc = 0;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        scanf("%d", &temp);
        if(temp == 0){
            zerc++;
        } else if(temp > 0){
            posc++;
        } else {
            negc++;
        }
    }

    printf("%d %d %d", posc, negc, zerc);
    return 0;
}
