//
//  main.cpp
//  Uva 10038 – Jolly Jumpers
//
//  Created by S M HEMEL on 8/31/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <iostream>
#include<stdio.h>
#include<algorithm>
#include<stdlib.h>
using namespace std;
int main()
{
    int n,c,b[3010],a[3010],i;
    while(scanf("%d",&n)==1)
    {
        c=1;
        for(i=0;i<n;i++)
            cin >> a[i];
        for(i=0;i<n-1;i++)
            b[i]=abs(a[i+1]-a[i]);
        sort(b,b+i);
        for(i=1;i<n;i++)
        {
            if(b[i]==b[i-1])
            {
                c=0;
                break;
            }
        }
        if(c==0)
            cout <<"Not jolly"<<endl;
        else
            cout <<"Jolly"<<endl;
    }
    return 0;
}
