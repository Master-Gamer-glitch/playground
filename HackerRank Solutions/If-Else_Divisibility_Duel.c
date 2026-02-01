/*
Problem - If-Else Divisibiliy Duel
Platform - HackerRank
Summary - Printing different outputs based on given conditions
*/

#include <stdio.h>
    
    int duel(long x,long y,long z)
    {
        if(x%y==0)
        {
            if(x%z==0)
            {
                printf("X defeats all!");
            }
            else
            {
                printf("Y triumphs over X!");
            }
        }
        else if(x%z==0)
        {
            printf("Z outsmarts X!");
        }
        else
        {
            printf("X remains undefeated!");
        }
        return 0;
    }
int main() {
    int X,Y,Z;
    scanf("%d %d %d",&X,&Y,&Z);
    duel(X,Y,Z);
 
    return 0;
}