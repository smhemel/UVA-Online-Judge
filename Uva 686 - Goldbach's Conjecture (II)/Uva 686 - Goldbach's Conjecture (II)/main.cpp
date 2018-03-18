//
//  main.cpp
//  Uva 686 - Goldbach's Conjecture (II)
//
//  Created by S M HEMEL on 12/17/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include<iostream>
#include <cmath>
using namespace std;
#define N 1000000
int prime[N] = {2};
bool mark[N];
void seive()
{
    for(int i=4;i<N;i+=2)
        mark[i]=1;
    mark[0]=1,mark[1]=1;
    int root = sqrt(N);
    for(int i=3; i<=root; i+=2)
        if(!mark[i])
            for(int l=i*i; l<=N; l+=(i+i))
                mark[l] = 1;
    int l=1;
    for(int i=3; i<N; i+=2)
        if(mark[i]==0)
            prime[l++]=i;
}
int main()
{
    seive();
    int n,cont;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        cont=0;
        int m = n/2;
        for(int i=0; i<=m; i++)
        {
            if(prime[i]>m) break;
            if(mark[n-prime[i]]==0 && mark[prime[i]]==0)
                cont++;
        }
        cout<<cont<<endl;
    }
    
    return 0;
}
