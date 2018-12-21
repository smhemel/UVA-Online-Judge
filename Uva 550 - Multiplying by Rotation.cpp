//
//  main.cpp
//  Uva 550 - Multiplying by Rotation
//
//  Created by S M HEMEL on 2/7/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    while (cin >> a >> b >> c)
    {
        int ans = 1;
        int total =  b*c;
        while (total != b) {
            total = total%a*c + total/a;
            ans++;
        }
        cout << ans << endl;
    }
    return 0;
}
