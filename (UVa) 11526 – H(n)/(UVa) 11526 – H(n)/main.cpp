//
//  main.cpp
//  (UVa) 11526 – H(n)
//
//  Created by S M HEMEL on 9/15/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
long long calc(int n)
{
    int r = int(sqrt(n));
    long long c = 0;
    for(int i=1; i<=r; i++)
        c = c + n/i;
    c = 2*c - r*r;
    return c;
}
int main()
{
    int k, n;
    cin >> k;
    while(k--)
    {
        cin >> n;
        cout << calc(n) <<endl;
    }
    return 0;
}
