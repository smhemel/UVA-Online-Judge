//
//  main.cpp
//  Uva 11413
//
//  Created by S M HEMEL on 10/21/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int a[1000000];
int main()
{
    int n,m,*p;
    cin >> n >> m;
    for (int i=0; i<n; i++)
        cin >> a[i];
    vector<int>v(a,a+n);
    vector<int>::iterator up,low;
    up = upper_bound (v.begin(),v.end(),5);
    p = &*up;
    cout << p <<endl;
    return 0;
}

