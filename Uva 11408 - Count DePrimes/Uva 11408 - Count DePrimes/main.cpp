//
//  main.cpp
//  Uva 11408 - Count DePrimes
//
//  Created by S M HEMEL on 1/9/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <iostream>
#define N 5000003
using namespace std;
bool prime[N];
int sum[N],ans[N];
void sieve()
{
    for(int i=2; i<=N; i++)
        if(!prime[i])
        {
            sum[i]+=i;
            for(int j = 2*i;j<=N;j+=i){
                prime[j] = true;
                sum[j]+=i;
            }
        }
    for(int i=2; i<=N; i++)
        ans[i] = ans[i-1] + (!prime[sum[i]]);
}
int main()
{
    sieve();
    int a,b;
    while(cin >> a >> b)
    {
        if(!a)
            return 0;
        printf("%d\n",ans[b]-ans[a-1]);
    }
    return 0;
}
