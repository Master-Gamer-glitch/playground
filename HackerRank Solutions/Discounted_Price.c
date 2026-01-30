/*
Problem - Discounted Price
Platform - HackerRank
Summary - Calculating the discount offered based on the price and discount percentage.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
float discounted(float price,float percent){
    float discount=(price*percent)/100;
    float final_price=price-discount;
    printf("The final price is: %f",final_price);
    return final_price;
}
int main() {
    float price;
    float percent;
    scanf("%f %f",&price,&percent);
    discounted(price,percent);

    return 0;
}
