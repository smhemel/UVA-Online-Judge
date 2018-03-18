//
//  main.cpp
//  10018 Reverse and Add
//
//  Created by S M HEMEL on 9/8/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <iostream>
#include<stdio.h>
using namespace std;
int main()
{
    long long  n,a,s,c;
    int t,i;
    while(scanf("%d",&t)==1)
    {
        for(i=1;i<=t;i++)
        {
            cin >> n;
            a=n;
            c=0;
            while(1)
            {
                s=0;
                while(n!=0)
                {
                    s=s*10+n%10;
                    n/=10;
                }
                if(s==a)
                    break;
                else
                {
                    n=s+a;
                    a=s+a;
                    c++;
                }
            }
            printf("%lld %lld\n",c,a);
        }
    }
    return 0;
}
