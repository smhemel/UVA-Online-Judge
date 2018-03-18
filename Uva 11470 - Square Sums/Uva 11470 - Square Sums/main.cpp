//
//  main.cpp
//  Uva 11470 - Square Sums
//
//  Created by S M HEMEL on 1/3/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <stdio.h>
int a[15][15];
int main()
{
    int n, tc = 1;
    while (scanf("%d",&n) && n)
    {
        for (int i=0; i<n; i++)
            for (int j=0; j<n; j++)
                scanf("%d",&a[i][j]);
        printf("Case %d:", tc++);
        for (int i=0; 2*i<n; i++)
        {
            int len = n-2*i;
            int r = i, c = i;
            int s = 0;
            if ((2*i+1)==n)
                s = a[i][i];
            else
            {
                for (int i=1; i<len; i++) s += a[r][c++];
                for (int i=1; i<len; i++) s += a[r++][c];
                for (int i=1; i<len; i++) s += a[r][c--];
                for (int i=1; i<len; i++) s += a[r--][c];
            }
            printf(" %d", s);
        }
        printf("\n");
    }
    return 0;
}
