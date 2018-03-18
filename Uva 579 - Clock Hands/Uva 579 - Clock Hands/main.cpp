//
//  main.cpp
//  Uva 579 - Clock Hands
//
//  Created by S M HEMEL on 10/13/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;
int main()
{
    double h,m,degree_h,degree_m;
    while(scanf("%lf:%lf",&h,&m) !=EOF)
    {
        if(h==0 && m==0)
            break;
        degree_h = (h*30)+(m/2);
        degree_m = m*6;
        double total = abs(degree_h-degree_m);
        if (total>180)
            total = 360-total;
        printf("%.3lf\n",total);
    }
    return 0;
}
