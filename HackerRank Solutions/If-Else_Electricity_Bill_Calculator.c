/*
Problem - If-Else electricity bill calculator
Platform - HackerRank
Summary - Calculating the electricity bill to be paid based on the units and some constraints
*/

#include <stdio.h>

int main() {
    
    long n;
    scanf("%ld",&n);
    float bill;
    
    if(n>=0 && n<=100){
        bill=n*5;
    }
    else if(n>100 && n<=300){
        bill=(100*5)+(n-100)*7;
    }
    else if(n>300){
        bill=(100*5)+(200*7)+(n-300)*10;
    }
    else{
        printf("Invalid Input!");
    }
    
    if(n>=0){
    if(bill<=1200){
        bill=bill-(bill*.1);
        printf("The electricity bill is: %.2f.",bill);
    }
    else{
        printf("The electricity bill is: %.2f.",bill);
    }
    }
  
    return 0;
}