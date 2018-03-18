//
//  main.cpp
//  uva 10699 - Count the factors
//
//  Created by S M HEMEL on 10/29/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <iostream>
using namespace std;
#include <cmath>
#define N 1000100
int prime[N];
void sieve()
{
    int root = sqrt(N)+1;
    for (int i=3; i<=root; i+=2)
    {
        if(prime[i] == 0)
        {
        for (int j=i*i; j<=N; j+=i+i)
            prime[j]= 1;
        }
    }
}
int main()
{
    int n,count;
    sieve();
    while(cin >> n)
    {
        int m = n;
        count = 0;
        if (n==0) break;
        if(prime[n]==0 && n%2==1)
            cout << m <<" : 1"<<endl;
        else
        {
            while(n%2==0)
            {
                count = 1;
                n = n/2;
            }
            for (int i=3; i<=n; i+=2)
            {
                if ((prime[i]==0 && i%2==1) && n%i==0)
                {
                    if(n%i==0)
                        count++;
                    while(n%i==0)
                    {
                        n = n/i;
                    }
                }
            }
            cout << m <<" : "<< count <<endl;
        }
        
    }
    return 0;
}





