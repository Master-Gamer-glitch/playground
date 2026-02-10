/*
Problem - If-Else Next Day Date Calculator
Platform - HackerRank
Summary - Printing the next date of the given date
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

    int date(unsigned short day,unsigned short month,unsigned int year)
    {
        unsigned short newday;
        unsigned short newmonth;
        unsigned int newyear;
        if((day>0 && day<=31) && (month>0 && month<=12) && (year>0))
        {
            if(month==4 || month==6 || month==9 || month==11)
            {
                
                if(day==30)
                {
                    newday=1;
                    newmonth=month+1;
                    newyear=year;
                    if(newday<10 && newmonth<10)
                        printf("0%hu-0%hu-%u",newday,newmonth,newyear);
                    else if(newday<10 && newmonth>=10)
                        printf("0%hu-%hu-%u",newday,newmonth,newyear);
                    else if(newday>=10 && newmonth<10)
                        printf("%hu-0%hu-%u",newday,newmonth,newyear);
                    else if(newday>=10 && newmonth>=10)
                        printf("%hu-%hu-%u",newday,newmonth,newyear);
                    
                }
                else
                {
                    newday=day+1;
                    newmonth=month;
                    newyear=year;
                    if(newday<10 && newmonth<10)
                        printf("0%hu-0%hu-%u",newday,newmonth,newyear);
                    else if(newday<10 && newmonth>=10)
                        printf("0%hu-%hu-%u",newday,newmonth,newyear);
                    else if(newday>=10 && newmonth<10)
                        printf("%hu-0%hu-%u",newday,newmonth,newyear);
                    else if(newday>=10 && newmonth>=10)
                        printf("%hu-%hu-%u",newday,newmonth,newyear);
                }
            }
            else if(month==1 || month==3 || month==5 || month==7 ||month==8 || month==10 || month==12)
            {
                if(month==12)
                {
                    if(day==31)
                    {
                        newday=1;
                        newmonth=1;
                        newyear=year+1;
                        if(newday<10 && newmonth<10)
                            printf("0%hu-0%hu-%u",newday,newmonth,newyear);
                        else if(newday<10 && newmonth>=10)
                            printf("0%hu-%hu-%u",newday,newmonth,newyear);
                        else if(newday>=10 && newmonth<10)
                            printf("%hu-0%hu-%u",newday,newmonth,newyear);
                        else if(newday>=10 && newmonth>=10)
                            printf("%hu-%hu-%u",newday,newmonth,newyear);
                    }
                    else
                    {
                        newday=day+1;
                        newmonth=month;
                        newyear=year;
                        if(newday<10 && newmonth<10)
                            printf("0%hu-0%hu-%u",newday,newmonth,newyear);
                        else if(newday<10 && newmonth>=10)
                            printf("0%hu-%hu-%u",newday,newmonth,newyear);
                        else if(newday>=10 && newmonth<10)
                            printf("%hu-0%hu-%u",newday,newmonth,newyear);
                        else if(newday>=10 && newmonth>=10)
                            printf("%hu-%hu-%u",newday,newmonth,newyear);
                    }
                }
                else
                {
                    if(day==31)
                    {
                        newday=1;
                        newmonth=month+1;
                        newyear=year;
                        if(newday<10 && newmonth<10)
                            printf("0%hu-0%hu-%u",newday,newmonth,newyear);
                        else if(newday<10 && newmonth>=10)
                            printf("0%hu-%hu-%u",newday,newmonth,newyear);
                        else if(newday>=10 && newmonth<10)
                            printf("%hu-0%hu-%u",newday,newmonth,newyear);
                        else if(newday>=10 && newmonth>=10)
                            printf("%hu-%hu-%u",newday,newmonth,newyear);
                    }
                    else
                    {
                        newday=day+1;
                        newmonth=month;
                        newyear=year;
                        if(newday<10 && newmonth<10)
                            printf("0%hu-0%hu-%u",newday,newmonth,newyear);
                        else if(newday<10 && newmonth>=10)
                            printf("0%hu-%hu-%u",newday,newmonth,newyear);
                        else if(newday>=10 && newmonth<10)
                            printf("%hu-0%hu-%u",newday,newmonth,newyear);
                        else if(newday>=10 && newmonth>=10)
                            printf("%hu-%hu-%u",newday,newmonth,newyear);
                    }
                }
            }
            else if(month==2)
            {
                if((year%400==0) || (year%4==0 && year%100!=0))
                {
                    if(day==29)
                    {
                        newday=1;
                        newmonth=3;
                        newyear=year;
                        if(newday<10 && newmonth<10)
                            printf("0%hu-0%hu-%u",newday,newmonth,newyear);
                        else if(newday<10 && newmonth>=10)
                            printf("0%hu-%hu-%u",newday,newmonth,newyear);
                        else if(newday>=10 && newmonth<10)
                            printf("%hu-0%hu-%u",newday,newmonth,newyear);
                        else if(newday>=10 && newmonth>=10)
                            printf("%hu-%hu-%u",newday,newmonth,newyear);
                    }
                    else
                    {
                        newday=day+1;
                        newmonth=month;
                        newyear=year;
                        if(newday<10 && newmonth<10)
                            printf("0%hu-0%hu-%u",newday,newmonth,newyear);
                        else if(newday<10 && newmonth>=10)
                            printf("0%hu-%hu-%u",newday,newmonth,newyear);
                        else if(newday>=10 && newmonth<10)
                            printf("%hu-0%hu-%u",newday,newmonth,newyear);
                        else if(newday>=10 && newmonth>=10)
                            printf("%hu-%hu-%u",newday,newmonth,newyear);
                    }
                }
                else
                {
                    if(day==28)
                    {
                        newday=1;
                        newmonth=3;
                        newyear=year;
                        if(newday<10 && newmonth<10)
                            printf("0%hu-0%hu-%u",newday,newmonth,newyear);
                        else if(newday<10 && newmonth>=10)
                            printf("0%hu-%hu-%u",newday,newmonth,newyear);
                        else if(newday>=10 && newmonth<10)
                            printf("%hu-0%hu-%u",newday,newmonth,newyear);
                        else if(newday>=10 && newmonth>=10)
                            printf("%hu-%hu-%u",newday,newmonth,newyear);
                    }
                    else
                    {
                        newday=day+1;
                        newmonth=month;
                        newyear=year;
                        if(newday<10 && newmonth<10)
                            printf("0%hu-0%hu-%u",newday,newmonth,newyear);
                        else if(newday<10 && newmonth>=10)
                            printf("0%hu-%hu-%u",newday,newmonth,newyear);
                        else if(newday>=10 && newmonth<10)
                            printf("%hu-0%hu-%u",newday,newmonth,newyear);
                        else if(newday>=10 && newmonth>=10)
                            printf("%hu-%hu-%u",newday,newmonth,newyear);
                    }
                }
            }
        }
        return 0;
    }
int main() {
    
    unsigned short day,month;
    unsigned int year;
    scanf("%hu %hu %u",&day,&month,&year);
    
    date(day,month,year);

    return 0;
}
