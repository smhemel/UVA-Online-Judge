//
//  main.cpp
//  Uva 993 - Product of digits
//
//  Created by S M HEMEL on 2/6/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
typedef unsigned long long ll;
vector <long long int> v,v1;
ll mulmod(ll a, ll b, ll c){
    ll x = 0,y = a%c;
    while(b>0){
        if(b&1)
            x = (x+y)%c;
        y = (y<<1)%c;
        b >>= 1;
    }
    return x;
}

ll pow(ll a, ll b, ll c){
    ll x = 1, y = a;
    
    while(b>0){
        if(b&1) x = mulmod(x,y,c);
        y = mulmod(y,y,c);
        b >>= 1;
    }
    return x;
}

bool miller_rabin(ll p, int it)
{
    if(p<2 || !(p&1)) return false;
    if(p==2) return true;
    
    ll s = p-1;
    while(s%2==0)
        s >>= 1;
    
    while(it--){
        ll a = rand()%(p-1)+1,temp = s;
        ll mod = pow(a,temp,p);
        if(mod==-1 || mod==1)
            continue;
        while(temp!=p-1 && mod!=p-1){
            mod = mulmod(mod,mod,p);
            temp <<= 1;
        }
        if(mod!=p-1)
            return false;
    }
    return true;
}
int main()
{
    int test;
    cin >> test;
    while(test--){
        v.clear();
        long long int n;
        cin >> n;
        if(n>=0 && n<=9){
            printf("%lld\n",n);
            continue;
        }
        bool flag = miller_rabin(n,18);
        if(flag)
            puts("-1");
        if(n<=81){
            for(int i=9; i>=2; i--)
                if(n%i==0){
                    cout << n/i << i << endl;
                    break;
                }
        }
        else{
            flag = false;
            for(int i=2; i<10; i++) {
                if(!(n%i))
                {
                    flag = true;
                    v.push_back(i);
                    n/=i;
                    if(n<10){
                        v.push_back(n);
                        break;
                    }
                    i = 1;
                    if(!n)
                        break;
                }
                else
                    flag = false;
            }
            if(!flag)
                puts("-1");
            else{
                sort(v.begin(),v.end());
                while(v[0]*v[1]<10 && (int)v.size()>2)
                {
                    int size = (int)v.size();
                    int ans = 1;
                    for(int i=0; i<size; i++){
                        if(ans*v[i]>9){
                            v1.push_back(ans);
                            ans = 1;
                            ans *= v[i];
                        }
                        else
                            ans *= v[i];
                        if(i==size-1)
                            v1.push_back(ans);
                    }
                    v.clear();
                    v = v1;
                    v1.clear();
                    sort(v.begin(),v.end());
                }
                for(auto u: v)
                    cout << u;
                cout << endl;
            }
        }
    }
    return 0;
}
