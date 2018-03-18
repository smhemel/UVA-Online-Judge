//
//  main.cpp
//  Uva 10168 - Summation of Four Primes
//
//  Created by S M HEMEL on 12/17/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include<iostream>
#include <cmath>
using namespace std;
#define N 10000000
bool mark[N];
void seive()
{
    for(int i=4;i<=N;i+=2)
        mark[i]=1;
    mark[0]=1,mark[1]=1;
    int root = sqrt(N);
    for(int i=3; i<=root; i+=2)
        if(!mark[i])
            for(int l=i*i; l<=N; l+=(i+i))
                mark[l] = 1;
}
int main()
{
    seive();
    int n;
    while (cin >> n)
    {
        if(n<8) printf("Impossible.\n");
        else
        {
            if(n&1)
                printf("%d %d ",2,3);
            else
                printf("%d %d ",2,2);
            n-=(4+(n&1));
            for(int i=2;n-i>=2; i++)
                if(!mark[i] && !mark[n-i])
                {
                    printf("%d %d\n",i,n-i);
                    break;
                }
        }
    }
    return 0;
}
