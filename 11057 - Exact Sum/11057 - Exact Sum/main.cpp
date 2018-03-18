//
//  main.cpp
//  11057 - Exact Sum
//
//  Created by S M HEMEL on 11/15/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <iostream>
#include<stdio.h>
using namespace std;
int main()
{
    long long int n,m,a[100000],dis,b=0,c=0;
    while(cin >> n)
    {
        dis=2000000;
        for(int i=0;i<n;i++)
            cin >> a[i];
        cin >> m;
        for(long int i=0; i<n; i++)
            for(long int j=0; j<n; j++)
            {
                if((a[i]+a[j])==m && i!=j)
                {
                    if(a[i]>a[j])
                    {
                        if((a[i]-a[j])<dis)
                        {
                            b=a[j];
                            c=a[i];
                            dis=a[i]-a[j];
                        }
                    }
                    else
                    {
                        if((a[j]-a[i])<dis)
                        {
                            b=a[i];
                            c=a[j];
                            dis=a[j]-a[i];
                        }
                    }
                }
            }
        printf("Peter should buy books whose prices are %lld and %lld.\n\n",b,c);
    }
}
