//
//  main.cpp
//  Uva 1225 - Digit Counting
//
//  Created by S M HEMEL on 10/11/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <stdio.h>
int main()
{
    int tst, i, j, k;
    scanf("%d", &tst);
    while(tst--)
    {
        int n, ara[10];
        for(i=0; i<10; i++) ara[i]=0;
        scanf("%d", &n);
        for(i=1; i<=n; i++)
        {
            j = i;
            while(j!=0)
            {
                k=j%10;
                ara[k]++;
                j/=10;
            }
        }
        for(i=0; i<9; i++) printf("%d ", ara[i]);
        printf("%d\n", ara[9]);
    }
    return 0;
}
