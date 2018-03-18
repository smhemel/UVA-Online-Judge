//
//  main.cpp
//  Uva 11327 - Enumerating Rational Numbers
//
//  Created by S M HEMEL on 4/16/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <cstdio>
#include <algorithm>
#include <map>
#include <utility>
using namespace std;
typedef long long ll;
#define MAX 200100
ll n,m,store[MAX];
void setup()
{
    store[0]=0;
    for(int i=1; i<MAX; i++)
        store[i]=i;
    for(ll i=2; i<MAX; i++){
        if(store[i]==i)
            for(ll j=i; j<MAX; j+=i)
                store[j] = store[j]/i*(i-1);
        store[i] += store[i-1];
    }
}
int main()
{
    setup();
    while(scanf("%lld",&n)!=EOF && n)
    {
        if(n==1){
            printf("0/1\n");
            continue;
        }
        if(n==2){
            printf("1/1\n");
            continue;
        }
        n--;
        ll z = lower_bound(store,store+MAX,n)-store;
        m = n-store[z-1];
        ll c=0;
        for(ll i=1; i<z; i++)
            if(__gcd(i,z)==1){
                c++;
                if(c==m){
                    printf("%lld/%lld\n",i,z);
                    break;
                }
            }
    }
    return 0;
}
