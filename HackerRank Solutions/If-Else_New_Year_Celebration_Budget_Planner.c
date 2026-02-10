/*
Problem - If-Else New Year Celebration Budget Planner
Platform - HackerRank
Summary - Finding out if new year celebration is possible or not based on some conditions
*/

#include <stdio.h>

    int celebration()
    {
        short budget,numGuests,foodCostPerGuest,decorationCost,musicCost,extraExpenses;
        scanf("%hd\n%hd\n%hd\n%hd\n%hd\n%hd",&budget,&numGuests,&foodCostPerGuest,&decorationCost,&musicCost,&extraExpenses);
        short totalCost=(foodCostPerGuest*numGuests)+decorationCost+musicCost+extraExpenses;
        if(totalCost<=budget)
        {
            if((numGuests>5 && numGuests<=50)&& (numGuests<=25 || musicCost>0 ))
            {
                if((decorationCost)<(0.3*budget) || (foodCostPerGuest*numGuests)<(.5*budget))
                {
                    printf("Celebration Approved");
                }
                else
                {
                    printf("Celebration Denied");
                }
            }
            else
            {
                printf("Celebration Denied");
            }
        }
        else
        {
            printf("Celebration Denied");
        }
        return 0;
    }
int main() {
    
    celebration();
  
    return 0;
}