//
//  main.cpp
//  uva 10302 Summation of Polynomials
//
//  Created by S M HEMEL on 9/23/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//


#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long double n,sum = 0;
    while((cin >> n))
    {
        sum = (n*n*(n+1)*(n+1))/4;
        printf("%.0Lf\n",sum);
    }
    return 0;
}
