//
//  main.cpp
//  Uva 10104 - Euclid Problem
//
//  Created by S M HEMEL on 1/22/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
using namespace std;
int egcd(int a, int b, int &x, int &y)
{
    if(a==0){
        x=0;
        y=1;
        return b;
    }
    int x1, y1;
    int d=egcd(b%a, a, x1, y1);
    x=y1-(b/a)*x1;
    y=x1;
    return d;
}
int main()
{
    int a, b, x, y, ans;
    while(cin>>a>>b)
    {
        ans = egcd(a, b, x, y);
        if(a==b)
        {
            x=0;
            y=1;
        }
        cout<<x<<" "<<y<<" "<<ans<<endl;
    }
    return 0;
}
