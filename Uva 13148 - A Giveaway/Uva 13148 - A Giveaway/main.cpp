//
//  main.cpp
//  Uva 13148 - A Giveaway
//
//  Created by S M HEMEL on 1/16/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    long long int n;
    while(scanf("%lld", &n) && n!=0)
    {
        if( n== 1 || n==64 || n==729 || n==4096 || n==15625 || n==46656 || n==117649 || n==262144 || n==531441 || n==1000000 || n==1771561 || n==2985984 || n==4826809 || n==7529536 || n==11390625 || n==16777216 || n==24137569 || n==34012224 || n==47045881 || n==64000000 || n== 85766121)
            printf("Special\n");
        
        else
            printf("Ordinary\n");
    }
    
    return 0;
}
