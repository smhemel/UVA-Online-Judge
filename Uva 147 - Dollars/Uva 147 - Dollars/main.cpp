//
//  main.cpp
//  Uva 147 - Dollars
//
//  Created by S M HEMEL on 5/31/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cstdio>
using namespace std;
long way[30010];
int main ()
{
    int coin [] = {5,10,20,50,100,200,500,1000,2000,5000,10000};
    way[0]=1;
    for (int i=0; i<11; i++)
        for (int j=coin[i]; j<=30005; j++)
            way[j] += way[j-coin[i]];
    long n,m;
    while (scanf("%ld.%ld",&n,&m))
    {
        long ans = n*100+m;
        if(ans==0) break;
        printf("%3ld.%.2ld%17ld\n",n,m,way[ans]);
    }
    return 0;
}
