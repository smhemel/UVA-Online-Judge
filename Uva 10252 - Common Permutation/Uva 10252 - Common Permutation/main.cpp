//
//  main.cpp
//  Uva 10252 - Common Permutation
//
//  Created by S M HEMEL on 11/16/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//


#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <map>
using namespace std;
int main()
{
    char s[1010],s1[1010];
    map<char, int>payaci;
    while(gets(s))
    {
        gets(s1);
        int len1=(int)strlen(s);
        int len2=(int)strlen(s1);
        sort(s,s+len1);
        sort(s1,s1+len2);
        payaci.clear();
        for(int i=0;i<len1;i++)
            payaci[s[i]]++;
        for(int i=0;i<len2;i++)
            if(payaci[s1[i]])
            {
                cout<< s1[i];
                payaci[s1[i]]--;
            }
        cout<< endl;
    }
    return 0;
}
