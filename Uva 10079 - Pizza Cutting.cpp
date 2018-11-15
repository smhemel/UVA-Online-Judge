//
//  main.cpp
//  Uva 10079 - Pizza Cutting
//
//  Created by S M HEMEL on 2/1/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    long int n;
    while (cin >> n)
    {
        if( n>=0 && n<=210000000)
            cout << ((n*(n+1))/2)+1 <<endl;
        else if(n<0) break;
    }
    return 0;
}
