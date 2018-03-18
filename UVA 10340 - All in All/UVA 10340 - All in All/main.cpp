//
//  main.cpp
//  UVA 10340 - All in All
//
//  Created by S M HEMEL on 10/11/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <string>
#include <string.h>
#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
    string s,s1;
    while (cin >> s >> s1)
    {
        int n = s.size();
        int m = s1.size();
        int count = 0;
        for(int i=0;i<m && count<n;i++)
            if(s1[i]==s[count])
                count++;
        
        if(count==n)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}
