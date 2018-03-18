//
//  main.cpp
//  Uva 948 - Fibonaccimal Base
//
//  Created by S M HEMEL on 12/5/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <iostream>
using namespace std;
int fib[50]={1,2};
void fibo()
{
    for (int i=2; i<50; i++)
        fib[i] = fib[i-1]+fib[i-2];
}
int binary_s(int n)
{
    int hi,lo,mid;
    lo = 0;
    hi = 50;
    while (hi-lo>1)
    {
        mid = (hi+lo)/2;
        if (fib[mid]<n)
            lo = mid;
        else
            hi = mid;
    }
    if (fib[hi]<=n)
        return hi;
    else
        return lo;
}
int main()
{
    fibo();
    int start,m, c,n;
    char res[41];
    scanf("%d", &c);
    while (c--)
    {
        scanf("%d",&n);
        m = n;
        start = binary_s(n);
        int j = 0;
        for (int i=start; i>=0; i--)
            if (n >= fib[i])
            {
                res[j++] = '1';
                n -= fib[i];
            }
            else
                res[j++] = '0';
        res[j] = 0;
        printf("%d = %s (fib)\n", m, res);
    }
    return 0;
}
