//
//  main.cpp
//  Uva 12279 - Emoogle Balance
//
//  Created by S M HEMEL on 6/10/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int n,x,t = 0;
    while(cin >> n && n){
        t++;
        int ans = 0;
        for(int i=0; i<n; i++){
            cin >> x;
            if(x==0)
                ans--;
            else
                ans++;
        }
        printf("Case %d: %d\n",t,ans);
    }
    return 0;
}
