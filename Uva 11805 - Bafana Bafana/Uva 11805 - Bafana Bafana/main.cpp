//
//  main.cpp
//  Uva 11805 - Bafana Bafana
//
//  Created by S M HEMEL on 4/7/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int test,t=0;
    cin >> test;
    while (test--)
    {
        t++;
        int a,b,c;
        cin >> a >> b >> c;
        int temp = b+c;
        printf("Case %d: %d\n",t,((temp%a) ? temp%a : a));
    }
    return 0;
}
