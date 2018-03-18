//
//  main.cpp
//  Uva 108 - Maximum Sum
//
//  Created by S M HEMEL on 1/24/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int n;
    while(cin >> n)
    {
        int a[110][110]={0};
        for(int i=1; i<=n; i++)
            for(int j=1; j<=n; j++)
            {
                int x;
                cin >> x;
                a[i][j] = (a[i][j-1]+a[i-1][j]-a[i-1][j-1]) + x;
            }
        int ans = 0;
        for(int i=1; i<=n; i++)
            for(int j=1; j<=n; j++)
                for(int k=1; k<=i; k++)
                    for(int l=1; l<=j; l++)
                    {
                        int sum = a[i][j]-a[i][l-1]-a[k-1][j]+a[k-1][l-1];
                        ans = (ans<sum) ? sum : ans;
                    }
        cout <<ans<< endl;
    }
    return 0;
}
