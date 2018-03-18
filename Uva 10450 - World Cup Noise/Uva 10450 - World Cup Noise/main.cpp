//
//  main.cpp
//  Uva 10450 - World Cup Noise
//
//  Created by S M HEMEL on 12/6/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<iostream>

using namespace std;

int main()
{
    double a[100];
    int c, d = 1,b, x = 1;
    a[0] = 1;
    a[1] = 1;
    for (int i=2; i<=55; i++)
        a[i] = a[i - 1] + a[i - 2];
    scanf("%d", &c);
    while (c>=d)
    {
        scanf("%d", &b);
        if (b < 51)
        {
            if (b == 0)
                a[b + 1] = 0;
            printf("Scenario #%d:\n%.lf\n\n", d, a[b + 1]);
            x++;
        }
        d++;
    }
    
    return 0;
}
