//
//  main.cpp
//  100 - The 3n + 1 problem
//
//  Created by S M HEMEL on 8/28/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <iostream>
#include<stdio.h>
#include <algorithm>
using namespace std;
int main()
{
    long int a,b,i,n,s,d;
    while(scanf("%ld%ld",&a,&b)==2)
    {
        d=0;
        if(a>b)
            swap(a,b);
        for(i=a;i<=b;i++)
        {
            n=i;
            s=1;
            while(n!=1)
            {
                if(n%2==0)
                {
                    n=n/2;
                    s++;
                }
                else
                {
                    n=3*n+1;
                    s++;
                }
            }
            if(d<s)
                d=s;
        }
        printf("%ld %ld %ld\n",a,b,d);
    }
    return(0);
}
