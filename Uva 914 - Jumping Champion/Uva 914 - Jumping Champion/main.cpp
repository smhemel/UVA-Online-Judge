//
//  main.cpp
//  Uva 914 - Jumping Champion
//
//  Created by S M HEMEL on 7/5/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <cstring>
#include <cctype>
using namespace std;
#define isp(x)   ((x==2) || (x>1 && (x&1) && !chekb(x)))
#define check(x) (flag[x>>6] & (1<<((x>>1) & 31)))
#define sign(x)  (flag[x>>6] |=(1<<((x>>1) & 31)))
#define all(ar) ar.begin(), ar.end()
const int M = 1000011;
int flag[(M>>6)+10];
vector <int> prime;
int c = 0;
void sieve(void)
{
    const int root = sqrt(M)+1;
    int i,j,k;
    sign(0);
    prime.push_back(2);
    for(i=3; i<=root; i+=2)
        if(!check(i))
            for(prime.push_back(i) ,j=i*i ,k=(i<<1); j<=M; j+=k)
                sign(j);
    for( ; i<=M; i+=2)
        if(!check(i))
            prime.push_back(i);
}
int num[120];
int main()
{
    sieve();
    int Case, n, m;
    scanf("%d", &Case);
    while(Case--)
    {
        scanf("%d %d", &n, &m);
        memset(num, 0, sizeof(num));
        int low = int(lower_bound(all(prime), n) - prime.begin());
        int up = int(upper_bound(all(prime), m) - prime.begin());
        int Max = 0, idx = 0, cnt = 0;
        for (int i=low+1; i<up; i++) {
            int tmp = prime[i] - prime[i-1];
            if(++num[tmp]>Max) {
                Max = num[tmp];
                idx = tmp;
            }
        }
        for(int i=1; i<=114; i++)
            if(num[i]==Max)
                if(++cnt>1)
                    break;
        if (cnt>1 || Max==0)
            puts("No jumping champion");
        else
            printf("The jumping champion is %d\n", idx);
    }
    return 0;
}
