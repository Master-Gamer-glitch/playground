/*
Problem - If-Else Smallest Even Multiple
Platform - HackerRank
Summary - Printing the smallest positive integer that is a multiple of both 2 and n.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

    int mult(unsigned short n)
    {
        if(n%2==0)
        {
            printf("%hu",n);
        }
        else
        {
            printf("%hu",2*n);
        }
        return 0;
    }
int main() {
    unsigned short n;
    scanf("%hu",&n);
    mult(n);
  
    return 0;
}
