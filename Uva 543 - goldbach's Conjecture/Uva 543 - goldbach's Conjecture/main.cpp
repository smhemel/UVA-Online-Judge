//
//  main.cpp
//  Uva 543 - goldbach's Conjecture
//
//  Created by S M HEMEL on 11/13/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <cmath>
#define N 1000000
using namespace std;
int prime[N] = {2};
bool mark[N];
void seive()
{
    for(int i=4;i<N;i+=2)
        mark[i]=1;
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
    int n;
    while (cin >> n)
    {
        if(n==0) break;
        cout << n << " = ";
        for(int i=0; i<n; i++)
        {
            if(mark[n-prime[i]]==0){
                cout << prime[i] <<" + "<< (n-prime[i]) <<endl;
                break;
            }
        }
    }
    return 0;
}
