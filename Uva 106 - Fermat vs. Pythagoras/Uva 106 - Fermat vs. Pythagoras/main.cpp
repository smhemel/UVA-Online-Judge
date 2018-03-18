//
//  main.cpp
//  Uva 106 - Fermat vs. Pythagoras
//
//  Created by S M HEMEL on 4/16/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include<cstdio>
#include<cmath>
#include <algorithm>
using namespace std;
#define sz 1000010
int a[sz];
int main()
{
    int x,y,z,n,cnt,sm,sq,tmpX,tmpY,tmpZ;
    while(~scanf("%d",&n))
    {
        for(int i=1; i<=n; i++)
            a[i] = 0;
        cnt = sm = 0;
        sq = sqrt(n);
        if((sq*sq)<n)
            sq++;
        for(int i=1; i<=sq; i++)
            for(int j=i+1; j<=sq; j++)
            {
                if(__gcd(i,j)==1)
                {
                    x = j*j-i*i;
                    y = 2*j*i;
                    z = j*j+i*i;
                    if(z>n)
                        break;
                    if(__gcd(__gcd(x,y),z)==1)
                        cnt++;
                    
                    tmpX=x,tmpY=y,tmpZ=z;
                    while(tmpZ<=n)
                    {
                        a[tmpX] = a[tmpY] = a[tmpZ] = 1;
                        tmpX+=x;
                        tmpY+=y;
                        tmpZ+=z;
                    }
                }
            }
        for(int i=1;i<=n;i++)
            if(a[i])
                sm++;
        printf("%d %d\n",cnt,n-sm);
    }
    return 0;
}
