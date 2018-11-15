//
//  main.cpp
//  10783 - Odd Sum
//
//  Created by S M HEMEL on 7/28/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <stdio.h>
int main()
{
    int n,a,b,sum,i,j;
    scanf("%d",&n);
    for (j=1; j<=n; j++)
    {
        sum = 0;
        scanf("%d%d",&a,&b);
        for (i=a; i<=b; i++)
        {
            if (i%2 !=0)
            {
                sum+=i;
            }
        }
        printf("Case %d: %d\n",j,sum);
    }
    return 0;
}
