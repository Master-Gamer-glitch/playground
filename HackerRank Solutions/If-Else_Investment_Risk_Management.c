/*
Problem - If-Else Risk Management
Platform - HackerRank
Summary - Calculating the risk based on some conditions
*/

#include <stdio.h>

    int portfolio(short age,int income,short risk)
    {
        if(age>50)
        {
            if(income>=0 && income<=75000)
            {
                if(risk<3)
                {
                    printf("Low Risk Portfolio: Suitable for conservative investments.");
                }
            }
            else if(income>75000)
            {
                if(risk==3)
                {
                    printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");
                }
                else
                {
                   printf("Low Risk Portfolio: Suitable for conservative investments.");
                }
            }
        }
        if(age>=30 && age<=50)
        {
            if((income>=0 && income<=30000) && (risk<3))
            {
                printf("Low Risk Portfolio: Suitable for conservative investments.");
            }
            else if(income>30000 && income<=75000)
            {
                if(risk==2)
                {
                    printf("Medium Risk Portfolio: Balanced risk for moderate returns.");
                }
            }
            else if(income>75000)
            {
                if(risk==1 || risk==2)
                {
                    printf("Medium Risk Portfolio: Balanced risk for moderate returns.");
                }
                else if(risk==3)
                {
                    printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");
                }
            }
        }
        else if(age>0 && age<30)
        {
            printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");
        }
        return 0;
    }
int main() {
    short age;
    int income;
    short risk;
    scanf("%hd %d %hd",&age,&income,&risk);
    portfolio(age,income,risk);
   
    return 0;
}