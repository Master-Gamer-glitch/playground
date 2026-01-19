/*
Problem - Bitwise check the sign of a number
Platform - HackerRank
Summary - Checking the sign of a given number using bitwise operations.
*/

#include <stdio.h>

int main() {
    
    long long n;
    scanf("%lld",&n);
    
    if((n&(1<<31))==0)
        printf("Positive");
    else
        printf("Negative");

    return 0;
}