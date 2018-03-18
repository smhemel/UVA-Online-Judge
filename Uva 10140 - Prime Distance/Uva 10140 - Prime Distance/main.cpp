//
//  main.cpp
//  Uva 10140 - Prime Distance
//
//  Created by S M HEMEL on 1/25/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <cstdio>
#define N 1000010
using namespace std;
bool check[N];
int prime[80000];
int dis[80000],p=0;
void seive()
{
    int root = sqrt(N);
    prime[p++] = 2;
    for(int i=3; i<=root; i+=2)
        if(!check[i])
            for(int l= i*i; l<=N; l+= i+i)
                check[l] = 1;
    for(int i=3; i<=N; i+=2)
        if(!check[i])
            prime[p++] = i;
}
int binary_s(int key)
{
    int first = 0,last = p-1;
    int mid = (first+last)/2;
    while(prime[mid]!=key) {
        if(prime[mid]>key)
            last = mid-1;
        else
            first = mid;
        mid = (first+last)/2;
    }
    return mid;
}
int main()
{
    ios_base::sync_with_stdio(0);
    seive();
    int a, b;
    while (scanf("%d%d", &a, &b)!=EOF)
    {
        while(1)
        {
            if(!check[a])
                break;
            a--;
        }
        int position = binary_s(a);
        if(a==b || prime[position+1]==b)
            printf("There are no adjacent primes.\n");
        else
        {
            int min = 99999999,max = 0;
            int x=0,x1=0,y=0,y1=0;
            for(int i=position+1; prime[i]<=b; i++)
            {
                int temp = abs(prime[i-1]-prime[i]);
                if(min>temp){
                    min = temp;
                    x=prime[i-1],y=prime[i];
                }
                if(max<temp){
                    max = temp;
                    x1 = prime[i-1], y1 = prime[i];
                }
            }
            printf("%d,%d are closest, %d,%d are most distant.\n",x,y,x1,y1);
        }
    }
    return 0;
}
