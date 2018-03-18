//
//  main.cpp
//  Uva 10286 - Trouble with a Pentagon
//
//  Created by S M HEMEL on 1/22/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    const double len = 1.0673956817;
    long double n;
    while (cin >> n)
    {
        double ans = 0;
        ans = len*n;
        printf("%.10lf\n",ans);
    }
    return 0;
}
