//
//  main.cpp
//  Uva 406 - Prime Cuts
//
//  Created by S M HEMEL on 1/18/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
#include<stdio.h>
#include <cmath>
using namespace std;
bool prime[1000];
int a[200];
int l1=0;
void seive()
{
    a[l1++] = 1,a[l1++]=2;
    int root = sqrt(1001);
    for(int i=3; i<=root; i+=2)
        if(!prime[i])
            for(int l=i*i; l<1000; l+=i+i)
                prime[l]=1;
    for(int i=3; i<1000; i+=2)
        if(prime[i]==0)
            a[l1++]=i;
}
int main()
{
    seive();
    int n,c,d;
    while(cin >> n >> c)
    {
        d = 0;
        if(n==1000 || n==999 || n==998 || n==997)
            d = 168;
        else
        {
            while(1)
            {
                if(a[d]>n)
                    break;
                d++;
            }
            d = d-1;
        }
        if((c*2)>(d+1))
        {
            printf("%d %d:",n,c);
            for(int l=0; l<=d;l++)
                printf(" %d",a[l]);
        }
        else 
        {
            printf("%d %d:",n,c);
            for(int j=d/2+1-c;j<=d/2+c-1;j++)
                printf(" %d",a[j]);
            if(d%2==1)
                printf(" %d",a[d/2+c]);
        }
        printf("\n\n");              
    }
    return 0;
}
