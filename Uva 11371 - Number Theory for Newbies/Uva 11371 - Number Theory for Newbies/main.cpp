//
//  main.cpp
//  Uva 11371 - Number Theory for Newbies
//
//  Created by S M HEMEL on 4/7/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <string>
#include <cmath>
#include <cstring>
#include <algorithm>
#define ll long int
using namespace std;
char s[1000];
int main()
{
    while (cin >> s)
    {
        string s1 = "";
        ll zero = 0,l=0;
        ll len = (int)strlen(s);
        for(ll i=0; i<len; i++)
            if(s[i]=='0')
                zero++;
        sort(s,s+len,greater<int>());
        ll m = stoll(s);
        for(l=len-1; l>=0; l--)
            if(s[l]!='0'){
                s1 += s[l];
                break;
            }
        for(int i=0; i<zero; i++)
            s1 += '0';
        for(ll i=l-1; i>=0; i--)
            if(s[i]!='0')
                s1 += s[i];
        ll n = stoll(s1);
        ll ans = abs(m-n);
        ll temp = ans/9;
        printf("%ld - %ld = %ld = 9 * %ld\n",m,n,ans,temp);
        
    }
    return 0;
}
