//
//  main.cpp
//  Uva 10179 - Irreducable Basic Fractions
//
//  Created by S M HEMEL on 1/16/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
#define N 1000000
using namespace std;
int power(int n)
{
    if (n==1)
        return 1;
    int output = n;
    if (n%2==0)
    {
        output -= (output/2);
        while(n%2==0)
            n/=2;
    }
    for(int i=3; i*i<=n; i+=2) {
        if (n%i==0) {
            output -= (output / i);
            while (n%i==0)
                n/=i;
        }
        if(n==1) break;
    }
    if (n>1)
        output -= (output/n);
    return output;
}
int main ()
{
    int n;
    while (cin >> n && n)
        printf ("%d\n",power(n));
    return 0;
}
