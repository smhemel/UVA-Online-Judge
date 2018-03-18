//
//  main.cpp
//  Uva 10338 - Mischievous Children
//
//  Created by S M HEMEL on 7/5/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <algorithm>
#include <map>
#include <cstdio>
using namespace std;
typedef unsigned long long ll;
int main() {
    ll t,test=0;
    scanf("%llu",&t);
    while(t--)
    {
        string s;
        cin >> s;
        map<char,int> m;
        int len = (int)s.size();
        for(int i=0; i<len; i++){
            if(!m.count(s[i]))
                m[s[i]]=1;
            else
                m[s[i]]++;
        }
        ll ans = 1;
        for(int i=2; i<=len; i++){
            ans*=i;
        }
        map <char,int>::iterator it;
        for(it=m.begin() ;it!=m.end(); it++)
            for(int i=1; i<=it->second; i++)
                ans/=i;
        printf("Data set %llu: %llu\n",++test,ans);
    }
    return 0;
}
