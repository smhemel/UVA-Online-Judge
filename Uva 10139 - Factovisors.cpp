//
//  main.cpp
//  Uva 10139 - Factovisors
//
//  Created by S M HEMEL on 2/5/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <stdio.h>
#include <math.h>
int prime[5500], pt = 0;
bool check[50000];
void sieve() {
    
    prime[pt++] = 2;
    int root = sqrt(50000)+1;
    for(int i=3; i<=root; i+=2)
        if(!check[i])
            for(int l= i*i; l<50000; l+= i+i)
                check[l] = 1;
    for(int i=3; i<=50000; i+=2)
        if(!check[i])
            prime[pt++] = i;
}
int solve(int n, int m)
{           //24     8
    int i;
    //Factorail Divides 8 Divides 24
    for(i=0; i<pt && prime[i]*prime[i]<=m; i++)
        if(m%prime[i] == 0) {
            int cnt = 0;
            while(m%prime[i] == 0)
                cnt++, m /= prime[i];
            long long tmp = prime[i], cnt2 = 0;
            while(tmp <= n) {
                cnt2 += n/tmp;
                tmp *= prime[i];
            }
            if(cnt2<cnt)
                return 0;
        }
    if(m!=1) {
        if(n<m)
            return 0;
    }
    return 1;
}
int main()
{
    sieve();
    int n, m;
    while(scanf("%d %d", &n, &m) == 2) {
        if(solve(n, m))
            printf("%d divides %d!\n", m, n);
        else
            printf("%d does not divide %d!\n", m, n);
    }
    return 0;
}

