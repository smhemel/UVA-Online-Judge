//
//  main.cpp
//  Uva 12709 Falling Ants
//
//  Created by S M HEMEL on 8/30/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;
int n,l,w,h,v,m;
int main()
{
    while(scanf("%d",&n)!=EOF & n!=0)
    {
        m = v = 0 ;
        while(n--)
        {
            scanf("%d %d %d",&l,&w,&h);
            if(m<h)
            {
                m = h;
                v = l*w*h ;
            }
            else if( m==h)
                v = max(v,l*w*h);
        }
        printf("%d\n",v);
    }
    return 0 ;
}
