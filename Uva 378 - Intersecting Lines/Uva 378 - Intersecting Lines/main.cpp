//
//  main.cpp
//  Uva 378 - Intersecting Lines
//
//  Created by S M HEMEL on 4/4/17.
//  Copyright © 2017 Bangladesh University of Business and Technology. All rights reserved.
//

#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int n, x1, y1, x2, y2, x3, y3, x4, y4, a, b, c, a1, b1, c1, det;
    double k;
    scanf("%d",&n);
    puts("INTERSECTING LINES OUTPUT");
    while(n--)
    {
        scanf("%d %d %d %d %d %d %d %d", &x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
        a = y1 - y2;
        b = x2 - x1;
        c = x2*y1 - x1*y2;
        a1 = y3 - y4;
        b1 = x4 - x3;
        c1 = x4*y3 - x3*y4;
        k = (a*1.0)/(a1*1.0);
        if(k*a1 == a && k*b1 == b && k*c1 == c){
            puts("LINE");
            continue;
        }
        det = a*b1 - b*a1;
        if(!det){
            puts("NONE");
            continue;
        }
        printf("POINT %.2lf %.2lf\n",(double)((c*b1-b*c1)*1.0/(det*1.0)),(double)((a*c1-c*a1)*1.0/(det*1.0)));
    }
    puts("END OF OUTPUT");
    return 0;  
}

