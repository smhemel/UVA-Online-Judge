//
//  main.cpp
//  Uva 482 - Permutation Arrays
//
//  Created by S M HEMEL on 6/9/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <vector>
#include <sstream>
using namespace std;
vector<int>first;
vector<string>second;
vector< pair<int, string> >result;

int main()
{
    int test, num;
    scanf("%d",&test);
    string s, t, str;
    getchar();
    while(test--)
    {
        getchar();
        getline(cin,s);
        stringstream ss(s);
        while(ss >> num)
            first.push_back(num);
        getline(cin,str);
        stringstream sst(str);
        while(sst >> t)
            second.push_back(t);
        int len = (int) min(first.size(), second.size());
        for(int i=0; i<len; i++)
            result.push_back(make_pair(first[i],second[i]));
        sort(result.begin(), result.end());
        for(int i=0; i<len; i++)
            cout<<result[i].second<<endl;
        first.clear();
        second.clear();
        result.clear();
        if(test)
            printf("\n");
    }
    return 0;
}
