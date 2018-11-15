//
//  main.cpp
//  11727 - Cost Cutting
//
//  Created by S M HEMEL on 7/26/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include<stdio.h>
int main()
{
    int a,b,c,d,ans = 0,j;
    while(scanf("%d",&d)==1)
    {
        for(j=1;j<=d;j++)
        {
            scanf("%d%d%d",&a,&b,&c);
            if((a>b && b>c) || (a<b && b<c))
                ans=b;
            if((a>c && c>b) || (a<c && c<b))
                ans=c;
            if((b>a && a>c) || (b<a && a<c))
                ans=a;
            printf("Case %d: %d\n",j,ans);
        }
    }
    return 0;
}
