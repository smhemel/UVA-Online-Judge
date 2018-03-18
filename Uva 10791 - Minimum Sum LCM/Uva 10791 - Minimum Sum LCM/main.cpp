//
//  main.cpp
//  Uva 10791 - Minimum Sum LCM
//
//  Created by S M HEMEL on 1/18/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include<cstdio>
#define MAX 2147483647
#define N 46340
int prime[N];
bool check[N];
int sieve();
int main()
{
    int Case = 0, n, p;
    p = sieve();
    while (scanf("%d", &n) && n)
    {
        Case++;
        if (n==MAX)
            printf("Case %d: 2147483648\n",Case);
        else if (n==1)
            printf("Case %d: 2\n",Case);
        else
        {
            int sum = 0, m = n;
            for(int i=0; i<p && prime[i]<=n; i++)
            {
                int count = 1;
                while (!(n%prime[i]))
                {
                    count *= prime[i];
                    n /= prime[i];
                }
                if (count != 1)
                    sum += count;
            }
            if (sum==m)
                sum++;
            else if (n != 1)
                sum += n;
            printf("Case %d: %d\n", Case, sum);
        }
    }
    return 0;
}
int sieve()
{
    int count = 0;
    prime[count++] = 2;
    for (int i=3; i<=N; i+=2)
        if (!check[i])
        {
            prime[count++] = i;
            for (int j = i*i; j<N; j += i*i)
                check[j] = 1;
        }
    return count;
}
