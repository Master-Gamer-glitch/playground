/*
Problem - Data Type Ranges
Platform - HackerRank
Summary - Printing the range of all data types
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <float.h>
#include <limits.h>

int main() {
    
        printf("short: %hd to %hd\n",SHRT_MIN,SHRT_MAX);
        printf("int: %d to %d\n",INT_MIN,INT_MAX);
        printf("long: %ld to %ld\n",LONG_MIN,LONG_MAX);
        printf("long long: %lld to %lld\n",LLONG_MIN,LLONG_MAX);
        printf("unsigned short: 0 to %hu\n",USHRT_MAX);
        printf("unsigned int: 0 to %u\n",UINT_MAX);
        printf("unsigned long: 0 to %lu\n",ULONG_MAX);
        printf("unsigned long long: 0 to %llu\n",ULLONG_MAX);
        printf("char: %hd to %hd\n",CHAR_MIN,CHAR_MAX);
        printf("unsigned char: 0 to %hd\n",UCHAR_MAX);
        printf("float: %e to %e\n",FLT_MIN,FLT_MAX);
        printf("double: %e to %e\n",DBL_MIN,DBL_MAX);
        printf("long double: %Le to %Le\n",LDBL_MIN,LDBL_MAX);
        
    return 0;
}
