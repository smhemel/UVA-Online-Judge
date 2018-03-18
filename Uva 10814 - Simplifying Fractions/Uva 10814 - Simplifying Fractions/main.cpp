//
//  main.cpp
//  Uva 10814 - Simplifying Fractions
//
//  Created by S M HEMEL on 8/29/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <iostream>
#define N 10000000000
using namespace std;
int main()
{
    int n,a,b,d;
    char x[N];
    cin >> n;
    while (n--)
    {
        if ((b%a)==0)
        {
            d = b/a;
            cout <<"1"<<" / "<< d <<endl;
        }
        else
            cout << a <<" / "<< b <<endl;
    }
    return 0;
}
