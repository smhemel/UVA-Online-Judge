//
//  main.cpp
//  Uva 10407- Simple Division
//
//  Created by S M HEMEL on 11/13/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;
long gcd(long x, long y){
    long r;
    while (y != 0){
        r = x % y;
        x = y;
        y = r;
    }
    return x;
}
int main()
{
    long small,next,temp;
    while (cin >> small)
    {
        if (small == 0) break;
        cin >> next;
        temp = abs(next - small);
        while (cin >> next)
        {
            if (next == 0) break;
            temp = gcd(temp,abs(next-small));
        }
        cout << temp << endl;
    }
    return 0;
}
