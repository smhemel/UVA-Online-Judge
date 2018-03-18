//
//  main.cpp
//  UVA 13109 Elephants
//
//  Created by S M HEMEL on 8/30/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n,m,w,a[100000],sum,c;
    cin >> m;
    while (m--)
    {
        cin >> n >> w;
        for (int j=0; j<n; j++)
            cin >> a[j];
        sort(a,a+n);
        c = 0;
        sum = 0;
        for (int i=0;i<n;i++)
        {
            sum = sum+a[i];
            if (sum>w)
                break;
            c++;
        }
        cout << c <<endl;
    }
    return 0;
}
