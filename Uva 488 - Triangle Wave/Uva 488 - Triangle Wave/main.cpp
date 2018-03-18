//
//  main.cpp
//  Uva 488 - Triangle Wave
//
//  Created by S M HEMEL on 11/22/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include<iostream>
using namespace std;
int main()
{
    long long int n,m,t,test;
    scanf("%lld", &test);
    for(t=1;t<=test;t++)
    {
        cin >> n >> m;
        for(int l=1;l<=m;l++)
        {
            for(int i=1; i<=n; i++)
            {
                for(int j=1; j<=i; j++)
                    cout << i;
                cout <<endl;
            }
            for(int i=n-1; i>=1; i--)
            {
                for(int j=1; j<=i; j++)
                    cout << i;
                if(t==test && l==m && i==1)
                    break;
                cout <<endl;
            }
            cout <<endl;
        }
    }
    return 0;
}
