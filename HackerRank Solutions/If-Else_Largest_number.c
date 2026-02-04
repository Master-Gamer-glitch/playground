/*
Problem - If-Else Largest Number among three numbers
Platform - HackerRank
Summary - Finding the largest number among the given three number using if-else statements
*/

#include <stdio.h>

int main() {
    short a;
    short b;
    short c;
    scanf("%hd %hd %hd",&a,&b,&c);
    
    if(a>b && a>c){
        printf("The largest number is : %hd",a);
    }
    else if(b>a && b>c){
        printf("The largest number is : %hd",b);
    }
    else{
        printf("The largest number is : %hd",c);
    }
     
    return 0;
}