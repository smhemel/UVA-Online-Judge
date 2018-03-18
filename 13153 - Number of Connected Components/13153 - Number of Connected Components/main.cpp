//
//  main.cpp
//  13153 - Number of Connected Components
//
//  Created by S M HEMEL on 13/10/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <map>
#include <utility>
#define N 111111
using namespace std;
int frequency[N];
int arr[N];
bool ch[N];
vector<int> v;
#define check(x) (flag[x>>6] & (1<<((x>>1) & 31)))
#define sign(x)  (flag[x>>6] |=(1<<((x>>1) & 31)))
#define isp(x)   ((x==2) || (x>1 && (x&1) && !check(x)))
int flag[(N>>6)+10];
int prime[700000];
int c = 0;
void sieve()
{
    const int root = sqrt(N)+1;
    int i,j,k;
    sign(0);
    prime[c++]=2;
    for(i=3; i<=root; i+=2)
        if(!check(i))
            for(prime[c++]=i ,j=i*i ,k=(i<<1); j<N; j+=k)
                sign(j);
    for( ; i<=N; i+=2)
        if(!check(i))
            prime[c++]=i;
}
void Divisors(int n)
{
    for(int i=0; prime[i]*prime[i]<=n; i++){
        if(n%prime[i]==0){
            v.push_back(prime[i]);
            while (n%prime[i]==0) {
                n /= prime[i];
            }
        }
    }
    if(isp(n) && !binary_search(v.begin(), v.end(),n))
        v.push_back(n);
        
}
void solve(int k){
    for(int i=0; i<k; i++)
    {
        int Max = 0,d = 0;
        if(isp(arr[i]))
            v.push_back(arr[i]);
        else
            Divisors(arr[i]);
        for(auto g: v)
        {
            if(Max<frequency[g]){
                Max = frequency[g];
                d = g;
            }
        }
        if(Max==0 || (int)v.size()==1)
            frequency[v[0]]++;
        else
        {
            frequency[d]++;
            for(auto o: v){
                if(d==o)
                    continue;
                frequency[d] += frequency[o];
                frequency[o] = 0;
            }
        }
        v.clear();
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    sieve();
    cin.tie(0);
    int test,n,x,k=0;
    cin >> test;
    for(int t=1; t<=test; t++)
    {
        int cnt = 0;
        cin >> n;
        for(int i=0; i<n; i++)
        {
            scanf("%d",&x);
            if(!ch[x] && x!=1){
                ch[x] = 1;
                arr[k++] = x;
            }
            if(x==1)
                cnt = 1;
        }
        sort(arr,arr+k);
        arr[k] = arr[0];
        k++;
        solve(k);
        solve(k);
        for(int i=0; i<c; i++){
            if(frequency[prime[i]])
                cnt++;
        }
        printf("Case %d: %d\n",t,cnt);
        memset(arr,0, sizeof(arr));
        memset(ch,0, sizeof(ch));
        memset(frequency,0, sizeof(frequency));
    }
    return 0;
}
5
5
2 10 6 9 25
