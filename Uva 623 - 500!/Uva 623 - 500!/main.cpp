//
//  main.cpp
//  Uva 623 - 500!
//
//  Created by S M HEMEL on 11/22/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//



#include <algorithm>
#include <cstdio>
#include <cstring>
#include <string>
#include <iostream>
using namespace std;

#define max 1001
#define len 2600

long num[max][len];

void factorial()
{
    num[0][0] = 1;
    num[1][0] = 1;
    
    for(long i=2; i<max; i++)
    {
        for(long j=0; j<len; j++)
        {
            num[i][j] += num[i-1][j] * i;
            
            if(num[i][j]>9)
            {
                num[i][j+1] += num[i][j] / 10;
                num[i][j] %= 10;
            }
        }
    }
}

int main()
{
    factorial();
    long n,i;
    
    while(scanf("%ld",&n)==1)
    {
        printf("%ld!\n",n);
        
        for(i=len-1; i>0; i--)
            if(num[n][i]!=0)
                break;
        
        for(; i>=0; i--)
            printf("%ld",num[n][i]);
        
        printf("\n");
    }
    
    return 0;
}
