//
//  main.cpp
//  Uva 10209 - Is This Integration ?
//
//  Created by S M HEMEL on 3/7/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <stdio.h>
#include <math.h>
#define pi acos(-1)
int main()
{
    double x,y,z,l,area;
    while(scanf("%lf", &x)!=EOF)
    {
        area = x*x;
        y = area * (1 - sqrt(3) + pi / 3);
        z = area * (2 * sqrt(3) - 4 + pi / 3);
        l = area * (4 - sqrt(3) - 2 * pi / 3);
        printf("%.3lf %.3lf %.3lf\n", y,z,l);
    }
    return 0;
}
