//
//  main.cpp
//  Uva 10650 - Determinate Prime
//
//  Created by S M HEMEL on 6/7/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

/*#include <iostream>
#include <cmath>
#include <cstdio>
#include <algorithm>
#include <vector>
#define check(x) (flag[x>>6] & (1<<((x>>1) & 31)))
#define setb(x)  (flag[x>>6] |=(1<<((x>>1) & 31)))
#define isp(x)   ((x==2) || (x>1 && (x&1) && !check(x)))
using namespace std;
const int mx = 1000000;
const int root  = sqrt(mx)+1;
int flag[(mx>>6)+10];
int prime[700000];
void sieve(void)
{
    int i,j,k, np=0;
    setb(0);
    prime[np++]=2;
    for(i=3; i<=root; i+=2)
        if(!check(i))
            for(prime[np++]=i ,j=i*i ,k=(i<<1) ; j<=mx ; j+=k)
                setb(j);
    for(;i<=mx;i+=2)
        if(!check(i))
            prime[np++]=i;
}
int dis[500000];
vector <int> v,w;
int main()
{
    sieve();
    int n,m,t=1;
    int d = abs(prime[32002]-prime[32001]);
    dis[prime[32001]] = t;
    t++;
    for(int i=32000; i>=0; i--){
        if(abs(prime[i]-prime[i+1])==d){
            dis[prime[i]] = t;
            t++;
        }
        else{
            d = abs(prime[i]-prime[i+1]);
            t = 1;
            dis[prime[i]] = t;
            t++;
        }
    }
    while (scanf("%d%d",&n,&m))
    {
        if(n==0 && m==0)
            break;
        if(n>m)
            swap(n,m);
        for(int i=n; i<=m; i++){
            bool f = false;
            if(dis[i]>=2){
                v.push_back(i);
                int temp = dis[i];
                i++;
                int t = 0;
                while(temp!=t){
                    if(isp(i)){
                        v.push_back(i);
                        t++;
                    }
                    if(i==7829 && m>=7853){
                        f = true;
                        w.push_back(7829);
                        w.push_back(7841);
                        w.push_back(7853);
                        i = 7853;
                    }
                    i++;
                    if(i>=m){
                        break;
                    }
                }
                int siz = (int)v.size();
                if(siz>2){
                    printf("%d",v[0]);
                    for(int k=1; k<siz; k++)
                        printf(" %d",v[k]);
                    printf("\n");
                    if(f){
                        printf("%d",w[0]);
                        for(int k=1; k<siz; k++)
                            printf(" %d",w[k]);
                        printf("\n");
                        f = false;
                    }
                }
                v.clear();
                i--;
            }
        }
    }
    return 0;
}*/



#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cmath>
#define check(x) (flag[x>>6] & (1<<((x>>1) & 31)))
#define setb(x)  (flag[x>>6] |=(1<<((x>>1) & 31)))
#define isp(x)   ((x==2) || (x>1 && (x&1) && !check(x)))
using namespace std;
const int mx = 33000;
const int root  = sqrt(mx)+1;
int flag[(mx>>6)+10];
int prime[10000],np=0;
void sieve(void)
{
    int i,j,k;
    setb(0);
    prime[np++]=2;
    for(i=3; i<=root; i+=2)
        if(!check(i))
            for(prime[np++]=i ,j=i*i ,k=(i<<1) ; j<=mx ; j+=k)
                setb(j);
    for(;i<=mx;i+=2)
        if(!check(i))
            prime[np++]=i;
}
void print (int n, int m)
{
    printf("%d",prime[n]);
    
    for(int i=n+1; i<=m; i++)
        printf(" %d",prime[i]);
    printf("\n");
}
int main ()
{
    sieve ();
    int x, y;
    while (scanf("%d %d", &x, &y))
    {
        if(!x and !y)
            break;
        if(x>y)
            swap (x,y);
        int i = 0;
        while(prime[i]<x)
            i++;
        while(prime[i+2]<=y)
        {
            if(prime[i+2]-prime[i+1] == prime[i+1]-prime[i])
            {
                int s_in = i;
                int e_in = i+2;
                int dif = prime[i+1]-prime[i];
                while(i+3<np && prime[i+3]-prime[i+2]==dif) {
                    e_in++;
                    i++;
                }
                if(prime[e_in]<=y) {
                    if(s_in==0 || prime[s_in]-prime[s_in-1] != dif)
                        print(s_in, e_in);
                }
                else
                    break;
            }
            i++;
        }
    }
    return 0;
}
