/*
Problem - Bitwise Toggle i-th Bit
Platform - HackerRank
Summary - Toggling the i-th bit of a number using bitwise operations where the number and the i-th bit both are given by the user.
*/

#include <stdio.h>

int main() {

    int n,i;
    scanf("%d\n%d",&n,&i);
    
    int toggled=(n^(1<<i));
    
    printf("%d",toggled);

    return 0;
}