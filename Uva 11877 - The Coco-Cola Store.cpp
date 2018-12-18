//
//  main.cpp
//  Uva 11877 - The Coco-Cola Store
//
//  Created by S M HEMEL on 2/6/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int n;
    while (cin >> n && n)
    {
        int ans = 0;
        while(n!=1)
        {
            ans += n/3;
            n = n/3 + (n%3);
            if(n==2)
                n +=1;
        }
        cout << ans <<endl;
    }
    return 0;
}
