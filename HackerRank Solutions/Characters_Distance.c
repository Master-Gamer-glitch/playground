/*
Problem - Character Distance
Platform - HackerRank
Summary - Finding the distance between two characters.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int sub(char a, char b)
{
    printf("The distance between %c and %c is %d",a,b,b-a);
    return 0;
}
int main() 
{
    char char1;
    char char2;
    scanf("%c %c",&char1,&char2);
    
    sub(char1,char2);
   
    return 0;
}