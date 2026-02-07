/*
Problem - If-Else Money Heist
Platform - HackerRank
Summary - Rotating the i-th digit n times to make the perfect combination
*/

#include <stdio.h>

int main() {
    short i0,i1,i2,i3,i4,i5,i6,i7,i8,i9;
    scanf("%hd %hd %hd %hd %hd %hd %hd %hd %hd %hd",&i0,&i1,&i2,&i3,&i4,&i5,&i6,&i7,&i8,&i9);
    short digit;
    short rotate;
    scanf("%hd %hd",&digit,&rotate);
    
    if(digit==0)
    {
        i0+=rotate;
        i0%=10;
    }
    else if(digit==1)
    {
        i1+=rotate;
        i1%=10;
    }
    else if(digit==2)
    {
        i2+=rotate;
        i2%=10;
    }
    else if(digit==3)
    {
        i3+=rotate;
        i3%=10;
    }
    else if(digit==4)
    {
        i4+=rotate;
        i4%=10;
    }
    else if(digit==5)
    {
        i5+=rotate;
        i5%=10;
    }
    else if(digit==6)
    {
        i6+=rotate;
        i6%=10;
    }
    else if(digit==7)
    {
        i7+=rotate;
        i7%=10;
    }
    else if(digit==8)
    {
        i8+=rotate;
        i8%=10;
    }
    else if(digit==9)
    {
        i9+=rotate;
        i9%=10;
    }
    scanf("%hd %hd",&digit,&rotate);
    if(digit==0)
    {
        i0+=rotate;
        i0%=10;
    }
    else if(digit==1)
    {
        i1+=rotate;
        i1%=10;
    }
    else if(digit==2)
    {
        i2+=rotate;
        i2%=10;
    }
    else if(digit==3)
    {
        i3+=rotate;
        i3%=10;
    }
    else if(digit==4)
    {
        i4+=rotate;
        i4%=10;
    }
    else if(digit==5)
    {
        i5+=rotate;
        i5%=10;
    }
    else if(digit==6)
    {
        i6+=rotate;
        i6%=10;
    }
    else if(digit==7)
    {
        i7+=rotate;
        i7%=10;
    }
    else if(digit==8)
    {
        i8+=rotate;
        i8%=10;
    }
    else if(digit==9)
    {
        i9+=rotate;
        i9%=10;
    }
    scanf("%hd %hd",&digit,&rotate);
    if(digit==0)
    {
        i0+=rotate;
        i0%=10;
    }
    else if(digit==1)
    {
        i1+=rotate;
        i1%=10;
    }
    else if(digit==2)
    {
        i2+=rotate;
        i2%=10;
    }
    else if(digit==3)
    {
        i3+=rotate;
        i3%=10;
    }
    else if(digit==4)
    {
        i4+=rotate;
        i4%=10;
    }
    else if(digit==5)
    {
        i5+=rotate;
        i5%=10;
    }
    else if(digit==6)
    {
        i6+=rotate;
        i6%=10;
    }
    else if(digit==7)
    {
        i7+=rotate;
        i7%=10;
    }
    else if(digit==8)
    {
        i8+=rotate;
        i8%=10;
    }
    else if(digit==9)
    {
        i9+=rotate;
        i9%=10;
    }
    printf("%hd %hd %hd %hd %hd %hd %hd %hd %hd %hd",i0,i1,i2,i3,i4,i5,i6,i7,i8,i9);
  
    return 0;
}