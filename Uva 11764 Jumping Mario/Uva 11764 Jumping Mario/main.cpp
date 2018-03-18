//
//  main.cpp
//  Uva 11764 Jumping Mario
//
//  Created by S M HEMEL on 9/7/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include<stdio.h>
int main()
{
    int n,i,c[1000],s=0,k,p=0,j,m;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d",&m);
        s=0;
        p=0;
        for(j=0; j<m; j++)
            scanf("%d",&c[j]);
        for(k=0; k<j-1; k++)
        {
            if(c[k]<c[k+1])
                s++;
            else if(c[k]>c[k+1])
                p++;
            else if(c[k]==c[k+1])
                continue;
        }
        printf("Case %d: %d %d\n",i,s,p);
    }
    return 0;
}
