//
//  main.cpp
//  Uva 10394 - Twin Primes
//
//  Created by S M HEMEL on 12/6/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include<algorithm>
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
bool prime[20000010];
int tprime[20000010];
void sieve()
{
    prime[1]=1;
    int n=sqrt(20000010);
    for(int i=3;i<=n;i+=2) {
        if(!prime[i]) {
            for(int j=2*i;j<=20000010;j=j+i)
                prime[j]=1;
        }
    }
}
void twin_prime()
{
    int j=1;
    for(int i=3;i<=20000000;i+=2) {
        if(!prime[i] && !prime[i+2])
            tprime[j++] = i;
    }
}
int main()
{
    sieve();
    twin_prime();
    int n;
    while(cin >> n)
    {
        printf("(%d, %d)\n",tprime[n],tprime[n]+2);
    }
    return 0;
}
