//
//  main.cpp
//  Uva 10739 - String to Palindrome
//
//  Created by S M HEMEL on 3/19/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <string>
using namespace std;
int main()
{
    int test,t = 0;
    cin >> test;
    while (test--)
    {
        t++;
        int cnt = 0;
        string s;
        cin >> s;
        int len = (int)s.length()/2;
        for(int i=0,l=(int)s.length()-1; i<len; i++,l--)
        {
            if(s[i]!=s[l])
                cnt++;
        }
        printf("Case  %d: %d\n",t,cnt);
    }
    return 0;
}
