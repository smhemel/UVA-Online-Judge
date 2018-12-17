//
//  main.cpp
//  Uva 11538 - Chess Queen
//
//  Created by S M HEMEL on 2/5/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
    long long a,b;
    while(scanf("%lld%lld",&a,&b))
    {
        if(!a && !b)
            break;
        if(a>b)
            swap(a,b);
        long long ans = a*b*(a-1) + a*b*(b-1);
        ans += 4*(2*(a*(a-1)*(a-2)/6) + (b-a+1)*a*(a-1)/2);
        printf("%lld\n",ans);
    }
    return 0;
}
