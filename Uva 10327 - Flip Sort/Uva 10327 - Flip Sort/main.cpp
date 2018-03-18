//
//  main.cpp
//  Uva 10327 - Flip Sort
//
//  Created by S M HEMEL on 9/1/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include<stdio.h>
int main()
{
    int n,a[1001],flip,i,j;
    while(scanf("%d",&n)==1)
    {
        for(i=1;i<=n;i++)
            scanf("%d",&a[i]);
        flip=0;
        for(i=1;i<=n;i++)
        {
            for(j=i+1;j<=n;j++)
            {
                if(a[i]>a[j])
                    flip++;
            }
        }
        printf("Minimum exchange operations : %d\n",flip);
    }
    return 0;
}
