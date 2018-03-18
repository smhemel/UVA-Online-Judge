//
//  main.cpp
//  Uva 11547-Autoatic Answer
//
//  Created by S M HEMEL on 10/9/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int test_case,n;
    while((cin >> test_case))
    {
        for(int i=0; i<test_case; i++)
        {
            cin >> n;
            n=n*567;
            n=n/9;
            n+=7492;
            n*=235;
            n/=47;
            n=n-498;
            n/=10;
            n%=10;
            n=abs(n);
            cout << n << endl;
        }
    }
    return 0;
}
