//
//  main.cpp
//  Uva 10910 - Marks Distribution
//
//  Created by S M HEMEL on 23/2/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <cstdio>
#include <cstring>
const int  N = 72;
typedef long long  LL;
LL a [N] [N];
int  main () {
    int  T;
    LL n, p, t;
    scanf ("%d" , &T);
    while (T--) {
        scanf("%lld%lld%lld" , & n, & t, & p);
        t = t - n * p;
        memset (a,0,sizeof(a));
        for(int  i=0; i<=n; i++)
            a[i][0] = 1;
        for(int i=1; i<=n; i++) {
            for(int j=1; j<=t; j++) {
                for(int  k=0; k<=j; k++)
                    a[i][j] += a[i-1][k];
            }
        }
        printf ("%lld\n",a[n][t]);
    }
    return  0;
}
