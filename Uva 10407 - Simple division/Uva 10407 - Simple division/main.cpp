//
//  main.cpp
//  Uva 10407 - Simple division
//
//  Created by S M HEMEL on 6/9/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
bool comp(const int &a, const int &b)
{
    return abs(a)<abs(b);
}
int main()
{
    vector<int>num;
    int n;
    while(cin >> n && n!=0)
    {
        num.clear();
        num.push_back(n);
        while(cin >> n && n!=0)
            num.push_back(n);
        sort(num.begin(),num.end(),comp);
        for(size_t i=0; i<num.size()-1; i++)
            num[i] = abs(num[i+1]-num[i]);
        num.erase(num.end()-1);
        int g = num[0];
        for (size_t i=1; i<num.size(); i++)
            g = __gcd(g, num[i]);
        cout << g << endl;
    }
    return 0;
}
