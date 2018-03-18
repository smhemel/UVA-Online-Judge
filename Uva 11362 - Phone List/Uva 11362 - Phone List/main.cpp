//
//  main.cpp
//  Uva 11362 - Phone List
//
//  Created by S M HEMEL on 2/21/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;
string nums [10010];
bool prefix_check (string a, string b)
{
    if(b.size()<a.size()) return false;
    for(size_t i=0; i<a.length(); i++)
        if(a[i] != b[i])
            return false;
    return true;
}
int main ()
{
    int testCase;
    scanf ("%d", &testCase);
    while(testCase--)
    {
        int n;
        scanf("%d",&n);
        for(int i=0; i<n; i++)
            cin >> nums[i];
        sort(nums,nums+n);
        bool flag = true;
        for(int i=0; i<n; i++)
            if(prefix_check(nums[i],nums[i+1]))
            {
                flag = false;
                break;
            }
        if(flag)
            printf("YES\n");
        else
            printf("NO\n");
    }
    
    return 0;
}
