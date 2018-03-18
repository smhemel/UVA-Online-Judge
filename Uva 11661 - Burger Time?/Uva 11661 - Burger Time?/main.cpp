//
//  main.cpp
//  Uva 11661 - Burger Time?
//
//  Created by S M HEMEL on 9/2/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <iostream>
#define N 2000000
using namespace std;
int main()
{
    int n;
    char a[N];
    while (scanf("%d",&n)==1 && n!=0)
    {
        int c = 1;
        for (int i=0; i<n; i++)
            cin >> a[i];
        for (int j=0; j<n; j++)
        {
            if (a[j]=='R')
            {
                <#statements#>
            }
        }
    }
    return 0;
}
