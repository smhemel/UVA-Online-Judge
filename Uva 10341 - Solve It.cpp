//
//  main.cpp
//  Uva 10341 - Solve It
//
//  Created by S M HEMEL on 2/3/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
using namespace std;
int p, q, r, s, t, u;
double solve(double i) {
    return ((p*exp(-i)) + (q*sin(i)) + (r*cos(i)) + (s*tan(i)) + (t*i*i) + (u));
}
int main()
{
    double mi;
    while (cin >> p >> q >> r >> s >> t >> u)
    {
        if (solve(0)*solve(1) > 0)
            printf("No solution\n");
        else
        {
            double lo=0.0,hi=1.0;
            for(int i=0; i<30; i++){
                mi=(lo+hi)/2;
                double f = solve(mi);
                if(f>0)
                    lo=mi;
                else
                    hi=mi;
            }
            
            printf("%.4f\n",lo);
        }
    }
    return 0;
}
