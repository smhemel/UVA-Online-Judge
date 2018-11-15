//
//  main.cpp
//  UVA - 10041 Vito's Family
//
//  Created by S M HEMEL on 12/23/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int i,t,n,a[5000],sum;
    scanf("%d",&t);
    while(t--)
    {
        int p=50000000;
        scanf("%d",&n);
        
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        
        sort(a,a+i);
        
        for(int j=0;j<n;j++)
        {
            sum=0;
            for(int k=0;k<n;k++)
            {
                sum+= abs(a[j]-a[k]);
            }
            p=min(sum,p);
        }
        printf("%d\n",p);
    }
    return 0;
}
