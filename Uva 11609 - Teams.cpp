//
//  main.cpp
//  Uva 11609 - Teams
//
//  Created by S M HEMEL on 1/29/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <cstdio>
#define MOD 1000000007
using namespace std;
long long mod_pow(long long a, int b){
    long long ans = 1;
    while(b)
    {
        if(b & 1)
            ans = (ans*a) % MOD;
        a = a * a % MOD;
        b >>= 1;
    }
    
    return ans;
}
int main()
{
    int t,n;
    scanf("%d",&t);
    for(int tc = 1;tc <=t; tc++){
        scanf("%d",&n);
        printf("Case #%d: %lld\n",tc, n*mod_pow(2,n-1) % MOD);
    }
    
    return 0;
}
