//
//  main.cpp
//  Uva 11689 - Soda Surpler
//
//  Created by S M HEMEL on 5/17/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int a,b,c;
        cin >> a >> b >> c;
        int total = a+b;
        int rem = 0,cnt = 0;
        while(total>=c)
        {
            cnt += total/c;
            rem = total%c;
            total /= c;
            total += rem;
        }
        cout << cnt << endl;
    }
    return 0;
}
