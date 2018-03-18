//
//  main.cpp
//  UVA 11854 Egypt
//
//  Created by S M HEMEL on 9/23/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long a,b,c,d,e,f;
    while((cin >> a >> b >> c) && a!=0 && b!=0 && c!=0)
    {
        d=a*a,e=b*b,f=c*c;
        if(f==d+e)
            cout << "right" <<endl;
        else if(d==e+f)
            cout << "right" <<endl;
        else if(e==d+f)
            cout << "right" <<endl;
        else
            cout << "wrong" <<endl;
    }
    return 0;
}
