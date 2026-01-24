/*
Problem - Bitwise Set i-th bit
Platform - HackerRank
Summary - Setting the i-th bit of a number 'n' where both 'n' and 'i' are provided by the user
*/

#include <stdio.h>

int main() {
    long long N;
    short i;
    scanf("%lld %hd",&N,&i);
    
    long long N_new=N|(1<<i);
    printf("%lld",N_new);

    return 0;
}