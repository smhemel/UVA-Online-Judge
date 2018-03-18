//
//  main.cpp
//  Uva 190 - Circle Through Three Points
//
//  Created by S M HEMEL on 3/7/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <stdio.h>
#include <math.h>
struct Point {
    double x, y;
};
Point circle(Point &a, Point &b, Point &c) {
    static Point ab, ac, o;
    static double a1, b1, c1, a2, b2, c2, D, D1, D2;
    ab.x = (a.x+b.x)/2, ab.y = (a.y+b.y)/2;
    ac.x = (a.x+c.x)/2, ac.y = (a.y+c.y)/2;
    a1 = a.x-b.x, b1 = a.y-b.y;
    c1 = a1*ab.x + b1*ab.y;
    a2 = a.x-c.x, b2 = a.y-c.y;
    c2 = a2*ac.x + b2*ac.y;
    D = a1*b2-a2*b1;
    D1 = c1*b2-c2*b1;
    D2 = a1*c2-a2*c1;
    o.x = D1/D;
    o.y = D2/D;
    return o;
}
int main()
{
    Point a, b, c;
    while(scanf("%lf %lf", &a.x, &a.y))
    {
        scanf("%lf %lf", &b.x, &b.y);
        scanf("%lf %lf", &c.x, &c.y);
        Point cir = circle(a, b, c);
        double r2 = (a.x-cir.x)*(a.x-cir.x)+(a.y-cir.y)*(a.y-cir.y);
        char c1, c2, c3;
        if(cir.x >= 0)    c1 = '-';
        else    c1 = '+';
        if(cir.y >= 0)    c2 = '-';
        else    c2 = '+';
        if(r2-cir.x*cir.x-cir.y*cir.y >= 0)
            c3 = '-';
        else    c3 = '+';
        printf("(x %c %.3lf)^2 + (y %c %.3lf)^2 = %.3lf^2\n", c1, fabs(cir.x), c2, fabs(cir.y), sqrt(r2));
        printf("x^2 + y^2 %c %.3lfx %c %.3lfy %c %.3lf = 0\n", c1, fabs(2*cir.x), c2, fabs(2*cir.y), c3, fabs(r2-cir.x*cir.x-cir.y*cir.y));
        puts("");
    }
    return 0;
}

