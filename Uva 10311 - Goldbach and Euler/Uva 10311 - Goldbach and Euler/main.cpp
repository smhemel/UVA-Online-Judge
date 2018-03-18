//
//  main.cpp
//  Uva 10311 - Goldbach and Euler
//
//  Created by S M HEMEL on 12/16/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <cmath>
#define N 100000000
using namespace std;
bool mark[N];
int l=1;
void seive()
{
    for(int i=4;i<N;i+=2)
        mark[i]=1;
    mark[0] = 1,mark[1] = 1;
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
    while (scanf("%d",&n)==1)
    {
        if(n<5) printf("%d is not the sum of two primes!\n",n);
        else if(n%2==1)
        {
            if(!mark[n-2]) printf("%d is the sum of %d and %d.\n",n,2,n-2);
            else printf("%d is not the sum of two primes!\n",n);
        }
        else {
            bool flag=0;
            for(int i=n/2;i<n;i++)
            {
                if(mark[n-i]==0 && mark[i]==0 && i!=(n-i))
                {
                    int t = 0,t1=0;
                    if(i>(n-i))
                        t = (n-i),t1 = i;
                        else t = i,t1 = (n-i);
                    printf("%d is the sum of %d and %d.\n",n,t,t1);
                    flag=1;
                    break;
                }
            }
            if(flag==0) printf("%d is not the sum of two primes!\n",n);
        }
    }
    return 0;
}
