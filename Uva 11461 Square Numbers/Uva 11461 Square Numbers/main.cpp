//
//  main.cpp
//  Uva 11461 Square Numbers
//
//  Created by S M HEMEL on 8/29/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
int main()
{
    int a,b,d,c;
    while (1)
    {
        cin >> a >> b;
        if(a==0&&b==0)
            break;
        d=0;
        for(int i=a;i<=b;i++)
        {
            c = sqrt(i);
            if(c*c==i)
                d++;
        }
        cout << d <<endl;
    }
    return 0;
}
