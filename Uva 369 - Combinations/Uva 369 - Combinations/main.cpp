//
//  main.cpp
//  Uva 369 - Combinations
//
//  Created by S M HEMEL on 9/18/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

/*#include <iostream>
using namespace std;
int main()
{
    long long int a,b;
    long long int m,sum,sum1,n;
    while ((cin >> a >> b))
    {
        sum  =  1,sum1  =  1, m = 0;
        if (a==0 && b==0) break;
        for (long long int j=1; j<=b; j++)
            sum1*=j;
        for (long long int i=1; i<=a; i++)
        {
            sum = sum*i;
            if (i==(a-b))
                m = sum;
        }
        n = sum/(m*sum1);
        cout << a << " things taken "<< b <<" at a time is " << n <<" exactly." <<endl;
    }
    return 0;
}*/



#include<stdio.h>
long long hemel(long long n,long long r)
{
    long long res=1,i;
    if(n-r<r)
        r = n-r;
    for(i=1; i<=r; i++,n--)
    {
        res = res*n;
        res = res/i;
    }
    return res;
}
int main()
{
    long long n,r;
    while(scanf("%lld%lld",&n,&r) && n && r)
    {
        printf("%lld things taken %lld at a time is %lld exactly.\n",n,r,hemel(n,r));
    }
    return 0;
}
