//
//  main.cpp
//  Uva 1213 - Sum of Different Primes
//
//  Created by S M HEMEL on 2/1/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#define N 1200
using namespace std;
bool check[N];
int prime[200];
int ans[1121][15];
int l1 = 0;
void sieve()
{
    int root = sqrt(N);
    prime[l1++] = 2;
    for(int i=3; i<=root; i+=2)
        if(!check[i])
            for(int l = i*i; l<N; l+= i*2)
                check[l] = 1;
    for(int i=3; i<N;  i+=2)
        if(!check[i])
            prime[l1++] = i;
}
void build()
{
    //Sum of Different Primes
    ans[0][0] = 1;
    for(int i=0; i<l1; i++)
        for(int j=1120; j>=prime[i]; j--)
            for(int k=14; k>=1; k--)
                ans[j][k] += ans[j-prime[i]][k-1];
}
int main()
{
    sieve();
    build();
    int n, m;
    while(scanf("%d %d",&n,&m) && n && m)
        printf("%d\n", ans[n][m]);
    return 0;
}
