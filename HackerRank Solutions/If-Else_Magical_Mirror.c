/*
Problem - If-Else Magical Mirror
Platform - HackerRank
Summary - Classifying the given number into different categories based on some conditions
*/

#include <stdio.h>
    int mirror(int N)
    {
        if(N>0)
        {
            if((N%2==0)&&N>10)
            {
                if((N%3==0)&&N>15)
                {
                    if(N%7==0)
                    {
                        printf("The verdict for the number %d is: SUPERNATURAL",N);
                    }
                    else
                    {
                        printf("The verdict for the number %d is: MIRACULOUS",N);
                    }
                }
                else if(N%7==0)
                {
                    printf("The verdict for the number %d is: MIRACULOUS",N);
                }
                else
                {
                    printf("The verdict for the number %d is: MAGICAL",N);
                }
            }
            else if((N%3==0)&&N>15)
            {
                if(N%7==0)
                {
                    printf("The verdict for the number %d is: MIRACULOUS",N);
                }
                else
                {
                    printf("The verdict for the number %d is: MAGICAL",N);
                }
            }
            else if(N%7==0)
            {
                printf("The verdict for the number %d is: MAGICAL",N);
            }
            else
            {
                printf("The verdict for the number %d is: NORMAL",N);
            }
        }
        else
        {
            printf("The verdict for the number %d is: INVALID",N);
        }
        return 0;
    }
int main() {
    
    int N;
    scanf("%d",&N);
    mirror(N);
   
    return 0;
}