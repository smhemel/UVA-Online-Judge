//
//  main.cpp
//  Uva 12015 - Google is Feeling Lucky
//
//  Created by S M HEMEL on 11/20/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//


#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    int test = 1,t,value,n;
    vector<string> ans;
    string s;
    cin >> t;
    while(t--)
    {
        value = -1;
        ans.clear();
        for(int i = 0;i < 10;++i)
        {
            cin >> s >> n;
            if(n>value)
            {
                value = n;
                ans.clear();
                ans.push_back(s);
            }
            else if(n == value)
                ans.push_back(s);
        }
        cout << "Case #" << test++ << ":\n";
        int len = (int) ans.size();
        for(int i = 0;i < len;++i)
            cout << ans[i] << '\n';
    }
    return 0;
}
