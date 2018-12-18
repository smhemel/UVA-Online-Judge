//
//  main.cpp
//  Uva 11849 - CD
//
//  Created by S M HEMEL on 2/5/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <stdio.h>
int cds[1000001];
int main()
{
    int m, n;
    while (scanf("%d%d", &n, &m), n!=0 && m!=0)
    {
        for (int i = 0; i < n; i++)
            scanf("%d",cds+i);
        int r = 0;
        int p = 0;
        while (m--)
        {
            int v;
            scanf("%d", &v);
            while (p<n && cds[p]<v)
                p++;
            if (cds[p] == v)
                r++;
        }
        printf("%d\n", r);
    }
    return 0;
}
