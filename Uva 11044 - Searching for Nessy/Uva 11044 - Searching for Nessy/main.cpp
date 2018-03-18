//
//  main.cpp
//  Uva 11044 - Searching for Nessy
//
//  Created by S M HEMEL on 11/19/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int n,m;
    int test;
    cin >> test;
    while (test--)
    {
        cin >> n >> m;
        cout << ((n/3)*(m/3)) <<endl;
    }
    return 0;
}
