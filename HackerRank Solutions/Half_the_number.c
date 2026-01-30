/*
Problem - Half the number
Platform - HackerRank
Summary - Printing the half value of the given number
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
float half(int num){

    float half=num/2.00;
    printf("Half of %d is %.2f",num,half);
    return half;
}
int main() {
        int num;
    scanf("%d",&num);
    half(num);
      
    return 0;
}
