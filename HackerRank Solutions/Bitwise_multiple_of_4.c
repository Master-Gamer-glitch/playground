/*
Problem - Bitwise check multiple of 4
Platform - HackerRank
Summary - Checking if the given number is a multiple of 4 or not using bitwise operations
*/

#include <stdio.h>

    int mult(int n)
    {
        if((n&3)==0)
        {
            printf("Yes");
        }
        else
        {
            printf("No");
        }
        return 0;
    }
int main() {
    int n;
    scanf("%d",&n);
    mult(n);
        
    return 0;
}