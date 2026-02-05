#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int count = 0;
    if(n == 0){
        return printf("1");
    

    }else{
        if(n < 0)
            n = n*(-1);
        for(int i = 0; ;){
            if(n/10 != 0){
                count++;
                n = n/10;
            } else{ 
                count++;
                printf("%d", count);
                break;
            }
        }
    }
    return 0;
}
