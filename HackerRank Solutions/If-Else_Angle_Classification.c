/*
Problem - If-Else Angle Classification
Platform - HackerRank
Summary - Printing the type of angle formed between the hour hand and minute hand.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int angle(unsigned int x)
{
    if(x>360)
    {
        if((x%360)!=0)
        {
            x=x%360;
        }
        else
        {
            x=360;    
        }
    }
    
    if(x<90)
    {
        printf("Acute Angle");    
    }
    else if(x==90)
    {
        printf("Right Angle");
    }
    else if(x>90 && x<180)
    {
        printf("Obtuse Angle");
    }
    else if(x==180)
    {
        printf("Straight Angle");
    }
    else if(x>180 && x<360)
    {
        printf("Reflex Angle");
    }
    else if(x==360)
    {
        printf("Full Rotation");
    }
    
    
    return 0;
}
int main() {
    int x;
    scanf("%d",&x);
    angle(x);

    return 0;
}
