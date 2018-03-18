//
//  main.cpp
//  UVA-10013 - Super long sums
//
//  Created by S M HEMEL on 9/1/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include<iostream>
#include <cstdio>
long int a1[2000000],a2[2000000],a3[2000000];
using namespace std;
int main()
{
    long int m,t,d,r;
    cin >> t;
        while (t--)
        {
            cin >> m;
            {
                for(long int l=0;l<m;l++)
                    cin >> a1[l] >> a2[l];
                r=0;
                for(long int j=m-1;j>=0;j--)
                {
                    d = 0;
                    d=a1[j]+a2[j]+r;
                    if(d>9)
                    {
                        a3[j]=d%10;
                        r=1;
                    }
                    else
                    {
                        a3[j] = d;
                        r=0;
                    }
                }
                for( long int i=0;i<m;i++)
                    cout << a3[i];
            }
            cout << endl;
            if(t==0)
                break;
            cout << endl;
        }
    return 0;
}
