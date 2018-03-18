//
//  main.cpp
//  Uva 12578 - 10:6:2
//
//  Created by S M HEMEL on 3/7/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <cstdio>
#define pi acos(-1)
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        double n;
        cin >> n;
        double length = n/10;
        double width = length*6;
        double rectangular_area = n*width;
        double r = length*2;
        double circle_area = pi*r*r;
        rectangular_area -= circle_area;
        printf("%.2lf %.2lf\n",circle_area,rectangular_area);
    }
    return 0;
}
