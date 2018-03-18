//
//  main.cpp
//  Uva 11369 - Shopaholic
//
//  Created by S M HEMEL on 24/2/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int main()
{
    int test,n,a[20000];
    cin >> test;
    while(test--){
        scanf("%d",&n);
        for(int i=0; i<n; i++) scanf("%d",&a[i]);
        sort(a,a+n);
        int ans = 0;
        for(int i = n-3;i >= 0; i-=3)
            ans += a[i];
        printf("%d\n",ans);
    }
    
    return 0;
}
