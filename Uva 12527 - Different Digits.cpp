//
//  main.cpp
//  Uva 12527 - Different Digits
//
//  Created by S M HEMEL on 2/4/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <map>
using namespace std;
int store(int n)
{
    map<int,int>mp;
    while(n>0)
    {
        int a=n%10;
        if(mp[a])
            return 0;
        mp[a]++;
        n/=10;
    }
    return 1;
}

int main()
{
    int ar[5001],a,b;
    ar[0]=0;
    for(int i=1; i<=5000; i++)
    {
        ar[i] = ar[i-1];
        if(store(i))
            ar[i]++;
    }
    while(cin >> a >> b)
    {
        printf("%d\n",ar[b]-ar[a-1]);
    }
    return 0;
}

