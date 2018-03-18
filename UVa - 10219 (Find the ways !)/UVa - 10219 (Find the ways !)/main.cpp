//
//  main.cpp
//  UVa - 10219 (Find the ways !)
//
//  Created by S M HEMEL on 1/21/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <cmath>
#define LL long long
using namespace std;
int main()
{
    LL n,m;
    //factorial digit count
    while(cin >> n >> m)
    {
        double digit = 0;
        if(m>n-m)
            for(LL i=m+1; i<=n; i++)
                digit += (log10(i)-log10(n-i+1));
        else
            for(LL i=n-m+1; i<=n; i++)
                digit += (log10(i)-log10(n-i+1));
        digit = floor(digit) + 1;
        printf ("%.0lf\n", digit);
    }
    return 0;
}
