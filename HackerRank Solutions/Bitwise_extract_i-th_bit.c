/*
Problem - Bitwise Extract the i-th Bit
Platform - HackerRank
Summary - Printing the i-th bit from right of a given number
*/

#include <stdio.h>

    int bit(long long n, short i)
    {
        int shifted=1<<i;
        if((n & shifted)!=0)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
        return 0;
    }
int main() {

        long long n;
        int i;
    scanf("%lld %d",&n,&i);
    bit(n,i);

    return 0;
}