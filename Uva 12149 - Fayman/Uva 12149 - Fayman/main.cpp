//
//  main.cpp
//  Uva 12149 - Fayman
//
//  Created by S M HEMEL on 9/30/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int a,b;
    while(1)
    {
        cin >> a;
        if(a==0)
            break;
        else
            b=(a*(a+1)*((2*a)+1))/6;
        cout << b <<endl;
    }
    return 0;
}
