//
//  main.cpp
//  10773 - Back to Intermediate Math
//
//  Created by S M HEMEL on 8/20/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main()
{
    int n,t=1;
    double u,v,d,t1,t2,m,a;
    cin>>n;
    while(n--)
    {
        
        cin >> d >> v >> u;
        if(v==0 || u == 0 || v >=u)
        {
            printf("Case %d: can't determine\n",t++);
            continue;
        }
        a=sqrt(u*u-v*v);
        t1=d/a;
        t2=d/u;
        m=t1-t2;
        printf("Case %d: %.3lf\n",t,m);
        t++;
    }
    
    return 0;
}
