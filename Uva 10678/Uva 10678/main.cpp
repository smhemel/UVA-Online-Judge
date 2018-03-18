//
//  main.cpp
//  Uva 10678
//
//  Created by S M HEMEL on 12/2/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    int n;
    double D, L, pi = atan(1)*4;
    cin >> n;
    while (n--)
    {
        cin >> D >> L;
        double area = pi*(L / 2) * sqrt((L / 2) * (L / 2) - (D / 2) * (D/2));
        cout << fixed << setprecision(3) << area << endl;
    }
    return 0;
}
