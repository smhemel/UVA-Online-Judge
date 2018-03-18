//
//  main.cpp
//  Uva 10361 - Automatic Poetry
//
//  Created by S M HEMEL on 12/6/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <string>
#include <cstdio>
using namespace std;
int a[100],b[100];
int main()
{
    int t;
    string s,s1;
    cin >> t;
    getchar();
    while (t--)
    {
        int start[2],end[2];
        getline(cin,s);
        getline(cin,s1);
        int len1 = (int) s.size();
        int len2 = (int) s1.size();
        int l=0,l1=0;
        for (int i=0; i<len1; i++)
        {
            if(s[i]!='<' && s[i]!='>')
                cout << s[i];
            else if(s[i]=='<')
                start[l++] = i+1;
            else if (s[i]=='>')
                end[l1++] = i;
        }
        for(int i=0; i<len2; i++)
        {
            
        }
    }
    return 0;
}
