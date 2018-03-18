//
//  main.cpp
//  UVA- 1583 Digit Genaretor
//
//  Created by S M HEMEL on 9/2/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    int n,m,a[101],v,j,l,sum;
    cin >> n;
    while (n--)
    {
        scanf("%d",&m);
        l=0;
        for(j=m-46;j<=m;j++)
        {
            v=j;
            sum=0;
            while(v!=0)
            {
                sum=sum+v%10;
                v=v/10;
            }
            if((sum+j==m))
                a[l++]=j;
        }
        sort(a,a+l);
        for (int i=0; i<100; i++)
        if(l==0)
            printf("0\n");
        else
            printf("%d\n",a[0]);
    }
    return 0;
}

