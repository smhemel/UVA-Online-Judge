//
//  main.cpp
//  11799 - Horror Dash
//
//  Created by S M HEMEL on 7/28/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <stdio.h>
#include <algorithm>
using namespace std;
int main()
{
    int n,m,a[10000],i,j,k;
    scanf("%d",&m);
    for (i=1; i<=m; i++)
    {
        scanf("%d",&n);
        for (j=0; j<n; j++)
        {
            scanf("%d",&a[j]);
        }
        sort(a,a+n);
        reverse(a,a+n);
        for (k=0; k<1; k++)
            printf("Case %d: %d\n",i,a[k]);
    }
    return 0;
}
