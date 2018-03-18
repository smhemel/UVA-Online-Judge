//
//  main.cpp
//  uva 10533 - Digit Primes
//
//  Created by S M HEMEL on 10/18/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
#define N 1000000
using namespace std;
bool primes[N+1];
int prime_store[N+1];

void sieve()
{
    for(int i = 0; i <= N; ++i)
    {
        primes[i] = true;
        prime_store[i] = 0;
    }
    primes[0] = primes[1] = false;
    for(int i=2; i*i<=N; ++i)
    {
        if(primes[i])
        {
            for(int j=2*i; j<=N; j+=i)
                primes[j] = false;
        }
    }
    int count = 0;
    for(int i=2; i<=N; ++i)
    {
        if(primes[i])
        {
            int temp = i;
            int sum_digit = 0;
            while(temp)
            {
                sum_digit += temp%10;
                temp /= 10;
            }
            if(primes[sum_digit])
                ++count;
        }
        prime_store[i] = count;
    }
}
int main()
{
    int num;
    int t1, t2;
    sieve();
    scanf("%d", &num);
    for(int l = 0; l < num; ++l)
    {
        int digit;
        scanf("%d %d", &t1, &t2);
        if(t1 == 0)
            digit = prime_store[t2];
        else
            digit = prime_store[t2] - prime_store[t1-1];
        printf("%d\n", digit);
    }
    return 0;
}
