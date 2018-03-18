//
//  main.cpp
//  10110 - Light, more light
//
//  Created by S M HEMEL on 8/27/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long long n,r;
    while(1)
    {
        r = 0;
        cin >> n;
        if(n==0)
            break;
        r = sqrt(n);
        if(r*r==n)
            cout <<"yes"<<endl;
        else
            cout <<"no"<<endl;
    }
    return 0;
}
