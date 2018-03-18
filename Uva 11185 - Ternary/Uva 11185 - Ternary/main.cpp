//
//  main.cpp
//  Uva 11185 - Ternary
//
//  Created by S M HEMEL on 8/28/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <cstring>
#define N 100000
using namespace std;
int main()
{
    long long int n;
    int a[N];
    while(1)
    {
        cin >> n;
        if(n==0)
            cout << "0";
        else if (n<0) break;
        int i = 0;
        while(n!=0)
        {
            a[i] = n%3;
            n = n/3;
            i++;
    
        }
        for(int j=i-1;j>=0;j--)
            cout << a[j];
        cout << endl;
    }
    return 0;
}
