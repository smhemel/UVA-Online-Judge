//
//  main.cpp
//  মিলার - প্রিমালিটি টেস্ট
//
//  Created by S M HEMEL on 5/9/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include<cstdio>
#define N 1000001
int fac[N];
void solve()
{
    int i;
    for (i = 0; i < N; i++)
        fac[i] = 1;
    fac[1] = 0;
    for (i=2; i<N; i++)
    {
        if (fac[i] == 1)
            for(int j=2; i*j<N; j++)
                fac[i*j] = fac[i] + fac[j];
    }
    for(i=2; i<N; i++)
        fac[i] += fac[i-1];
}
int main()
{
    int n;
    solve();
    scanf("%d", &n);
    while (scanf("%d", &n) != EOF)
        printf("%d\n", fac[n]);
    return 0;
}
