/* 
Problem - Convert 24-Hour Time to 12-Hour Format
Platform - HackerRank
Summary - Converting the time in 24 hour format to 12 hour format.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

    int conv(int h,int m){
        int conv_hr=h%12;
        if(h==0){
        printf("12:%02d AM",m);
    }
    else if(h==12){
        printf("%d:%02d PM",h,m);
    }
    else if(h<12){
        printf("%d:%02d AM",conv_hr,m);
    }
        else{
             printf("%d:%02d PM",conv_hr,m);
        }
        return 0;
    }
int main(){
    int h;
    int m;
    scanf("%d %d",&h,&m);
    
    conv(h,m);
   
    return 0;
}
