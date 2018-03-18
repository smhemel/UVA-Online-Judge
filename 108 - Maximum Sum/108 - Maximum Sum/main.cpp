//
//  main.cpp
//  108 - Maximum Sum
//
//  Created by S M HEMEL on 8/27/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <iostream>
#define N 100000
using namespace std;
int main()
{
    int n,a[N],b[N],c[N],d[N],m=0;
    cin >> n;
    for (int i=0; i<n; i++)
        cin >> a[i] >> b[i] >> c[i] >> d[i];
    for (int j=1; j<n; j++)
    {
        m = m + (a[j]+b[j]);
    }
    cout << m <<endl;
}
